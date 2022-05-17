#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int x; cin >> x;
        vector<int> A;
        A.push_back(x);
        for(int j=1;j<n+1;j++){
            int a; cin >> a;
            A.push_back(A[j-1]+a); 
        }
        for(int j=0; j<n+1;j++){
        }
        cout << *max_element(A.begin(), A.end()) << endl;
    }
    return 0;    

}