#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int x; cin >> x;
        int sum = 0;
        for(int i=0; i<n-1; i++){
            int a; cin >> a;
            sum += a;
        }
        if (n*x-sum<0) cout << 0 << endl;
        else cout << n*x - sum << endl;
    }
    return 0;
}