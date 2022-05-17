#include <iostream>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        int a; cin >> a;
        int b; cin >> b;
        int x; cin >> x;
        int y; cin >> y;
        int th = a * b;
        int av = x*y;
        if (av >= th) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


}