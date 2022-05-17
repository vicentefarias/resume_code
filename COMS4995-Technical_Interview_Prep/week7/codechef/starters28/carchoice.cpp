#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i=0; i<t;i++){
        int x1; cin >> x1;
        int x2; cin >> x2;
        int y1; cin >> y1;
        int y2; cin >> y2;
        if (y1*x2>y2*x1) cout << "1" << endl;
        else if (y2*x1>y1*x2) cout << "-1" << endl;
        else cout << "0" << endl;
    }
    return 0;
    
}