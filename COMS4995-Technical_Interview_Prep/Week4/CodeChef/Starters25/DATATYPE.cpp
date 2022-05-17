#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;
    for(int i=0; i<T; i++){
        int N; cin >> N;
        int X; cin >> X;
        int val = 0;
        for(int j=0; j<X; j++){
            val += 1;
            if (val > N)
                val = 0;
        }
        cout << val << endl;
    }
}