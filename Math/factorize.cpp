#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// output all factors of a given number in a sorted order

vector<int> allFactors(int A){

	vector <int> factors;
	int i = 0; // to keep the count of number of factor pairs
	int k;

	for (int j = 1; j <= sqrt(A); j++){

		if (A%j == 0){
			k = A/j;
		} else{
			continue;
		}

		if (factors.size() == 0){
			factors.push_back(j);
			if (j != k){
				factors.push_back(k);
			}
						
		}else{
			factors.insert(factors.begin()+i,j);
			if (j != k){
				factors.insert(factors.begin()+factors.size()-i,k);
			}

		}

		i++;

	}

	return factors;


}

int main(){

	// vector<int> test(5);	
	// test.insert(test.begin(),1);
	// double a = sqrt(5);
	// cout << test.size() << endl;

	vector <int> factorVector = allFactors(10);
	for (int i = 0;i < factorVector.size(); i++){
		cout << factorVector.at(i) << endl;
	}

	return 0;
}