#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int coord = 0;
        int neg = 1;
        if (n%2!=0) neg = -1;
        int q = n/2;
        if (q*2 < n) q++;
        cout << q*neg << endl;
    }    

}