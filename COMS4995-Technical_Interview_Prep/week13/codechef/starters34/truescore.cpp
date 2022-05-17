#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int a; cin >> a; 
        int b; cin >> b;
        int c; cin >> c;
        int d; cin >> d;
        if (c>=a && d>=b) cout << "POSSIBLE" << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}