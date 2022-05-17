#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        if (n%4) cout << "Not Good" << endl;
        else cout << "Good" << endl;
    }    
    return 0;
}