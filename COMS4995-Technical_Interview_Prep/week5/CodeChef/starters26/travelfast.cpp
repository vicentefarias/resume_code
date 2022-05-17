#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int x; cin >> x;
        int y; cin >> y;
        if (x<y) 
            cout <<"BIKE" << endl;
        else if (x==y) (cout << "SAME" << endl);
        else (cout << "CAR" << endl);
    }
    return 0;
}