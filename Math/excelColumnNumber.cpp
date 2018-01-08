#include <iostream>
#include <cmath>
using namespace std;

int titleToNumber(string A) {

	int i, value, base = 26, power, answer = 0, beforeA = int('A')-1;
    
    for (i = 0; i < A.size(); i++){
        
        power = i;
        value = int(A.at(A.size()-i-1)) - beforeA;
        
        answer = answer + value * pow(base, power);
        
    }
    
    return answer;

}


int main(){

	cout << titleToNumber("ABBA") << endl;

	return 0;
}