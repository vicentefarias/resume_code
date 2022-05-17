#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main() {
	// your code goes here
    // Implemented Sieve of Eratosthenes
    // source: https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
	int t; cin >> t;
	while (t){
		long long n; cin >> n;
		vector<bool> primes(n+1, true);
		primes[0] = primes[1] = false;
		for (long long i=2; i<=sqrt(n); i++){
			if (primes[i] && i*i<=n){
				for(long long j=i*i; j<=n; j+=i)
					primes[j] = false;
			}
		}
        if (primes[n]) cout << "YES" << endl;
        else cout << "NO" << endl;
		t--;
	}
	return 0;
}