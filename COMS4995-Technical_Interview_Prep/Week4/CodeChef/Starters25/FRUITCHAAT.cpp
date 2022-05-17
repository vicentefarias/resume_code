#include <iostream>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0;i<T;i++){
        int X; cin >> X;
        int Y; cin >> Y;
        int chaat = 0;
        int a = Y/1;
        int b = X/2;
        if (b < Y)
            cout << b << endl;
        else
            cout << Y << endl;
    }
}
