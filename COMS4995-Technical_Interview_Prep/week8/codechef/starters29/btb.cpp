#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t; i++){
        int n; cin >> n;
        int x; cin >> x;
        int houses = 0;
        for(int j=0; j<n;j++){
            int h; cin >> h;
            if (h < x) houses = j+1;
        }
        cout << houses << endl;
    }    

}