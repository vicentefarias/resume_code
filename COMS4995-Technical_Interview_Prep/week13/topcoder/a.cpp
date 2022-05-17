#include <bits/stdc++.h>
using namespace std;
class PrimesBetween {
	public:   
    	int count(int start, int end){
        bool prime[end+1];
        memset(prime, true, sizeof(prime));
        for (int p=2; p*p<=; p++){
            if (prime[p] == true){
                for (int i=p*2; i<=n; i += p){
                    prime[i] = false;
                }
            }
        }  
        int c = 0;
        for (int p=start; p<=end; p++){
        if (prime[p]) c++;
        }
        return c;        
    	}
};
