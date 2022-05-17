#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;
    for (int i=0; i<T; i++){
        int X; cin >> X;
        cout << X-1 << " " << X << " " << X+1 << endl;
    }
    return 0;
}