//https://www.interviewbit.com/problems/greatest-common-divisor/

#include<iostream>

using namespace std;


int gcd(int A, int B) {
    int temp, ans = 1;
    if (B > A){
        temp = B;
        B = A;
        A = temp;
    }
    
    if (B == 0){
        return A;
    }else{
        temp = A % B;
        ans = gcd(B, temp);
    }
    
    return ans;
    
}

int main(){
    cout << gcd(6, 45) << endl;
    return 0;
}