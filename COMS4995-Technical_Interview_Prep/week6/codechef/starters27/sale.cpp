#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        vector<int> ABC;
        for(int j=0; j<3; j++){
            int x; cin >> x;    
            ABC.push_back(x);
        }
    sort(ABC.begin(), ABC.end());
    cout << ABC[1] + ABC[2] << endl;
    }

}