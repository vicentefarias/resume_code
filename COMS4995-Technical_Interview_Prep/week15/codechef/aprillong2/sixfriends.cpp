#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        if (float(y)/float(x)>=1.5) cout << 3*x << endl;
        else cout << 2*y << endl;
    }

}