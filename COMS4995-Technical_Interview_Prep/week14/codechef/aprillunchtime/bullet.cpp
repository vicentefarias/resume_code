#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        int z; cin >> z;
        int t = (y/x);
        if (z-t<0) cout << 0 << endl;
        else cout << z - t << endl;
    }
        return 0;


}