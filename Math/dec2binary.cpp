#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>  // for string streams
using namespace std;

string findDigitsInBinary(int A) {

	string str = "";
	int c = 0;
	int digit, temp;
	temp = A;
	while (pow(2,c) <= A){
		c++;
	}
	if(A>0){
		c--;
	}
	//cout << c << endl;
	while (c >= 0){
		digit = temp/pow(2,c);
		//cout << digit  << endl;
		ostringstream str1;
		str1 << digit;
		str = str.append(str1.str());
		temp-= digit*pow(2,c);
		c--;
	}

	return str;

}

int main(){

	//int xyz = pow(2,3);

	cout << findDigitsInBinary(0) << endl;

	return 0;
}
