#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int x; cin >> x;
        if (x>65) cout << "Overload" << endl;
        else if (x<35) cout << "Underload" << endl;
        else cout << "Normal" << endl;
    }    
}