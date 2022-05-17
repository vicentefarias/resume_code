#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        vector<int> A;
        for(int j=0;j<n;j++){
            int x; cin >> x;
            A.push_back(x);
        }
        int L=0;
        for(int j=1; j<=n; j++){
            if (A[j-1] != j){
                L = j;
                break;
            }
        }
        if (L != 0){
            int R = distance(A.begin(), find(A.begin(), A.end(), L));
            L-=1;
            reverse(A.begin()+L, A.begin()+R+1);
        }
        for(int j=0;j<n;j++){
            cout << A[j] << " ";
        }
        cout << endl;
    
    }
}