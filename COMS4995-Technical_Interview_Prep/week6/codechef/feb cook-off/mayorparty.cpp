#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int A; cin >> A;
        int B; cin >> B;
        int C; cin >> C;
        if (B > A+C) cout << B << endl;
        else cout << A+C << endl;
    }
}