#include <iostream>
#include <cmath>

using namespace std;

int isPalindrome(int A) {

	if (A<0) return 0;

	// O/P 0 if no, 1 if yes
	int startIndex = 0, endIndex, intBegin, intEnd, answer = 1, size = 0, temp;

	// finding the number of digits in A
	while (pow(10,size) < A){
		size++;
	}

	//cout << "size = " << size << endl;
	
	endIndex = size - 1;

	while (startIndex < endIndex){

		temp = pow(10,(endIndex - startIndex));

		//cout << "A = " << A << endl;

		intBegin = A / temp;
		intEnd = A - (A/10)*10;

		// cout << "begin" << intBegin << endl;
		// cout << "end" << intEnd << endl;

		if (intEnd != intBegin){
			answer = 0;
			break;
		}
		A = A % temp;
		A = (A - intEnd)/10;
		startIndex++;
		endIndex--;
	}

	return answer;

}

int main(){

	cout << isPalindrome(1234321) << endl;
	return 0;
}