#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        if (x%2==0) cout << (x/2) << endl;
        else cout << (x/2)+1 << endl;
    }
	return 0; 

}