#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;
    for(int i=0; i<T; i++){
        int A; cin >> A;
        int B; cin >> B;
        int C; cin >> C;
        if (A == B+C)
            cout << "YES" << endl;
        else if (B == A+C) 
            cout << "YES" << endl;
        else if (C == A+B) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}