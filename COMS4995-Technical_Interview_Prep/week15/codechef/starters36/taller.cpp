#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        if (x>y) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}