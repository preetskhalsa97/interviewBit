#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &A, int B, int C) {

    if (B == 0 || C == 0 || A.size() == 0 || B > A.size()){
        return 0;
    }
    
    int i, j, ans = 0, numDigits;
    
    // making a vector with the digits of C
    int k = 0; // number of digits in C
    while (C >= pow(10,k)){
        k++;
    }
    //cout << "k = " << k << endl;
    
    vector<int> cArray(k);
    
    for (i = 0; i < k; i++){
        cArray[i] = C / pow(10, k-i-1);
        int x = pow(10, k-i-1);
        C = C % x;
    }
    
    if (B > cArray.size()){
        ans = 0;
    } else if (B < cArray.size()){
        // we will return all the possible combinations
        if (A[0] != 0){
            ans = pow(A.size(), B); 
        }else{
            // first element is 0
            ans = (A.size()-1) * pow(A.size(), B-1); 
            if (B==1){
                ans++;
            }
        }
    } else{
        // B == cArray.size()
        // j mapping cArray, k mapping A
        j = 0;
        for (k = 0; k < A.size(); k++){
            if (A[k] == 0 && cArray[j] != 0){
                continue;
            }
            numDigits = cArray.size() - j;
            if (A[k] < cArray[j]){
                
                ans = ans + pow(A.size(), numDigits - 1); 
                
            } else if(A[k] == cArray[j]){
                j++;
                numDigits--;
                while (j < cArray.size()){
                    for (i = 0; i < A.size(); i++){
                        if (A[i] < cArray[j]){
                            
                            ans = ans + pow(A.size(), numDigits - 1);
                            
                        } if (A[i] > cArray[j]){
                            // exit from everything
                            j = cArray.size();
                            break;
                            
                        }else{
                            // A[i] == cArray[j]
                            j++;
                            numDigits--;
                            break;
                            
                        }
                        
                    }
                }
                
                
                break;
                
            } else{
                // A[k] > cArray[j]
                break;
            }
        }
        
    }

    
    
    return ans;



}

int main(){

	vector<int> test(1);
	test.push_back(0);
	test.push_back(1);
	test.push_back(2);
	test.push_back(5);
	cout << solve(test, 2, 21) << endl;
	test.push_back(4);
	return 0;
}
