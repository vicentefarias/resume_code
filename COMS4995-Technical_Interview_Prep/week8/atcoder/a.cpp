#include <iostream>
using namespace std;

int main(){

    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;
    int x; cin >> x;
    if (x<=a) cout << 1 << endl;
    else if (x<=b) cout << long double(c)/long double(b-a) << endl;
    else cout << 0 << endl;

}