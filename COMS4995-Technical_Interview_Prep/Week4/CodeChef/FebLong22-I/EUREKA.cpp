#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        int N; cin >> N;
        float x = pow((0.143 * N), N);
        if (x - float(int(x)) < 0.5)
            cout << int(x) << endl;
        else
            cout << int(x)+1 << endl;
    }
}