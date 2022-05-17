#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        int z; cin >> z;
        if (z%x && z%y) cout << "NONE" << endl;
        else if (z%x==0 && z%y==0) cout << "ANY" << endl;
        else if (z%x==0 && z%y) cout << "CHICKEN" << endl;
        else if (z%x && z%y==0) cout << "DUCK" << endl;
    }
    return 0;
}