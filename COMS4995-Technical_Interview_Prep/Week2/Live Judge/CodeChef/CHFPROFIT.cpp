#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;
    for (int i=0; i<T; i++){
        int X; cin >> X;
        int Y; cin >> Y;
        int Z; cin >> Z;
        cout << X*(Z-Y) << endl;
    }
    return 0;
}