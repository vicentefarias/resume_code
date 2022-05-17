#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        cout << abs(x-y) << endl;
    }
    return 0;
}