#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int findRank(string A) {

	int i, tracking, count, track = 0, size;
	long int rank = 1,fact;
	size = A.size();
	vector<int> charArray(size);
	//cout << "charArray" << endl;
	for (i = 0; i < A.size(); i++){
		charArray[i] = int(A.at(i)); 
		//cout << charArray[i] << endl;
	}




	tracking = charArray[track++];
	// sorting in asc order
	vector<int> available = charArray;
	sort(available.begin(), available.end());

	// for (i=0; i < size; i++){
	// 	cout << available[i] << endl;
	// }

	while (available.size() > 1){

		// cout << "tracking " << tracking << endl;
		// cout << "availble : " << endl;

		// for (i=0; i < available.size(); i++){
		// 	cout << available[i] << endl;
		// }

		for (i = 0; i<available.size(); i++){

			if (available[i] == tracking){
				count = i; // number to be multiplied with the factorial; number of numbers in available array less than the number being tracked
				//cout << "count = " << count << endl;
				break;
			}

		}

		fact = 1;

		for (i = 1; i <= available.size()-1; i++){
			fact = fact*i;
		}

		//cout << "factorial = " << fact << endl;

		rank = rank + count * fact; // fact = (size(available)-1)!

		//cout << "rank = " << rank << endl;

		available.erase(available.begin() + count);

		tracking = charArray[track++];

	}

	return rank%1000003;

}

int main(){

	cout << findRank("ZCSFLVHXRYJQKWABGT") << endl;
	return 0;
}