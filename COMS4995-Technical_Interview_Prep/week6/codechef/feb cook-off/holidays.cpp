#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int w; cin >> w;
        vector<int> A;
        for(int j=0;j<n;j++){
            int x; cin >> x;
            A.push_back(x);
        }
        sort(A.begin(), A.end());
        reverse(A.begin(), A.end());
        int bal = 0;
        int days = 0;
        for(int j=0;j<n;j++){
            if (bal>=w)
                days += 1; 
            bal += A[j];
        }
        cout << days << endl;
    }
	return 0;
}