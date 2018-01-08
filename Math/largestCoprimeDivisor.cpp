#include<iostream>

using namespace std;

int cpFact(int A, int B) {

	int i, ans, test, num1, num2, temp, gcd, found = 0;

	// optimal if A > B

	for (i = 1; i <= A; i++){
		if (A % i != 0){
			continue;
		}
		test = A / i;
		// finding the gcd of test and B
		num1 = test;
		num2 = B;
		if (num2 > num1){
			temp = num2;
			num2 = num1;
			num1  = temp;
		}
		// num1 > num2
		while (num1 % num2 != 0)
		{
			temp = num2;
			num2 = num1 % num2;
			num1 = temp;

		}
		gcd = num2;
		if (gcd == 1){
			ans = test;
			break;
		}
	}

	return ans;


}

int main(){

	cout << cpFact(30, 12) << endl;
	return 0;
}