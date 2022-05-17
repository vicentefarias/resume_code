#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while (t){
        int l; cin >> l;
        int c; cin >> c;
        for(int i=0; i<l; i++){
            for (int j=0; j<c; j++){
                if ((i+j)%2==0) cout << "*";
                else cout << ".";
            }
            cout << endl;
        }
        t--;
    }
	return 0;
}