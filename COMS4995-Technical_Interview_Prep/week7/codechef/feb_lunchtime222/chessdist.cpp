#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x1; cin >> x1;
        int y1; cin >> y1;
        int x2; cin >> x2;
        int y2; cin >> y2;
        int absX = abs(x1-x2);
        int absY = abs(y1-y2);
        if (absX>absY) cout << absX << endl;
        else cout << absY << endl;
    }
    return 0;

}