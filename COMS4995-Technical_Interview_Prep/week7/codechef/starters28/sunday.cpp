#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int count = 8;
        for(int j=0; j<n; j++){
            int x; cin >> x;
            if (x%7 != 6 && x%7 != 0 ) count ++;
        }
        cout << count << endl;
    }
    return 0;
}