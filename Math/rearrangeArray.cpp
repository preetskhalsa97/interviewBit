// https://www.interviewbit.com/problems/rearrange-array/

#include <iostream>
#include <vector>

using namespace std;

void arrange(vector<int> &A) {
    string test = "", thisStr = "";
    int i, k;
    for(i = 0; i < A.size(); i++){
        test = test + to_string(A[A[i]]) + ",";
    }
    k = 0;
    for (i= 0; i < test.size(); i++){
        if (test[i] == ','){
            A[k++] = stoi(thisStr);
            thisStr = "";
        }else{
            thisStr = thisStr + test[i];
        }
    }
    for(i = 0; i < A.size(); i++){
        cout << A[i] << endl;
    }
    
    
}


int main() {
	vector<int> arr = {0,2,3,4,1, 7, 6, 5, 9, 8};
	arrange(arr);
	
	return 0;
}
