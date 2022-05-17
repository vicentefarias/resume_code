#include <iostream>
using namespace std;

int main(){

    int t; cin>>t;
    for(int i=0; i<t; i++){
        int a; cin >> a;
        int b; cin >> b;
        int sum = a+b;
        int rem = 21 - sum;
        if (rem < 12) cout << rem << endl;
        else cout << -1 << endl;
    }

}