#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        if (x/10 > 100) cout << x*(0.1) << endl;
        else cout << 100 << endl;
    }
}