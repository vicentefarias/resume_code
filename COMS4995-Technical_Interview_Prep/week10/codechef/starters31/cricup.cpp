#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        int d; cin >> d;
        if (x>y){
            if (x-y <= d) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else{
            if (y-x<= d) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

}