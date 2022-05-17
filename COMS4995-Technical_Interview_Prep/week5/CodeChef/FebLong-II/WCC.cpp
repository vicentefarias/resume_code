#include <iostream>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        int x; cin >> x;
        string r; cin >> r;
        int cf = 0;
        int cn = 0;
        for(int j=0; j<14; j++){
            if (r[j] == 'C') cn+=2;
            else if (r[j] == 'N') cf+=2;
            else if (r[j] == 'D'){cf++;cn++;}
        }
        if (cn > cf) cout << 60*x << endl;
        else if (cn == cf) cout << 55*x << endl;
        else cout << 40*x << endl;
    }

}