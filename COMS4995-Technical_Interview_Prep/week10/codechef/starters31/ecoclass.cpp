#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int count = 0;
        vector<int> S;
        vector<int> D;
        for(int j=0; j<n; j++){
            int x; cin >> x;
            S.push_back(x);
        }
        for(int j=0; j<n; j++){
            int x; cin >> x;
            D.push_back(x);
        }
        for(int j=0; j<n; j++){
            if (S[j] == D[j]) count++;
        }
        cout << count << endl;
    }    

}