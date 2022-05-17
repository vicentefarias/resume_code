#include <bits/stdc++.h>
using namespace std;
class EquateNumbers {
	public:   
        int gcd(int a, int b){
            if (a == 0)
                return b;
            return gcd(b % a, a);
        }
    	string canMakeEqual(vector <int> A){
            if (A.size()==1) return "Yes";
            if(count(A.begin(), A.end(), 1)>0) return "Yes";
            int x = A[0];
            for(int i=1; i<A.size(); i){
                x = gcd(A[i], x);
            }
            if (x==1) return "No";
            else return "Yes";
        } 

};