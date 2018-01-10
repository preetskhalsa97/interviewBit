// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> plusOne(vector<int> &A) {
    
    int i = A.size() - 1, carry = 0;
    while (i >= 0){
        
        carry = 0;
        
        if (A[i] != 9){
            
            A[i] = A[i] + 1;
            break;
            
        }else{
            
            A[i] = 0;
            carry = 1;
            i--;
            
        }
        
    }
    if (carry == 1){
        
        A.insert(A.begin(),1);
        
    }
    
    // remove preceeding zeros
    
    while (A[0] == 0){
        A.erase(A.begin());
    }
    
    return A;
    
}
