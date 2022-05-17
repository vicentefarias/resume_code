#include <iostream>

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int m; cin >> m;
        int k; cin >> k;
        if (n <= m*k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;

}