#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int> &A, int B, int C) {

	if(B > A.size()){
		return 0;
	}

	int i, temp;

	// storing all the digits of B in an array
	vector<int> arr();
	temp = B;
	while (temp > 0){

	}


	return 0;

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
