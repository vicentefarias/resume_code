#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int odd = 0;
    int even = 0;
    for (int i=0; i<N; i++){
        int batch; cin >> batch;
        if (batch%2 == 0)
            even += 1;
        else
            odd += 1;
    }
    cout << (even/2) + (odd/2) << endl;
    return 0;
}