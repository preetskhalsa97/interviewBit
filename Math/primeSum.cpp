#include <iostream>
#include <vector>
#include <cmath>

vector<int> primesum(int A) {

	vector<int> primes(2);

	int i = 2,j,k,iPrime,jPrime,isDone = 0;

	while (true){
	    
	    //cout << "i = " << i << endl;

		iPrime = 1; // assuming i is prime

		// checking if i is prime
		for (k = 2; k <= sqrt(i); k++){
			if (i%k == 0){
				// i is composite
				iPrime = 0;
				break;
			}
		}

		// if i is prime
		if (iPrime == 1){
		    jPrime = 1;
		    //cout << "i is prime" << endl;
			j = A-i;
			//cout << "j = " << j << endl;
			// checking if j is prime
			for (k = 2; k <= sqrt(j); k++){
				if (j%k == 0){
					// j is composite
					jPrime = 0;
					break;
				}
			}

			// if jPrime is also prime
			if (jPrime == 1){
			    
			    //cout << "j is prime" << endl;

				primes[0] = i;
				primes[1] = j;
				isDone = 1;

			}
			
		}

		if (isDone == 1){
			return primes;
		}

		i++;

	}    

}


int main(){

	vector<int> primes = primesum(20);
	return 0;
}