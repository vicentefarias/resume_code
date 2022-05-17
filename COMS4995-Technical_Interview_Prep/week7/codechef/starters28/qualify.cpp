#include <iostream>
using namespace std;

int main(){

    int t; cin>> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int a; cin >> a;
        int b; cin >> b;
        if (a+2*b >= x) cout << "Qualify" << endl;
        else cout << "NotQualify" << endl;
    }
    return 0;
}