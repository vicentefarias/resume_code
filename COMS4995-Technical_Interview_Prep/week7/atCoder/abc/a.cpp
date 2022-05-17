#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> A;
    for(int i=0; i<10; i++){
        int x; cin >> x;
        A.push_back(x);
    }

    int cur = A[0];
    for(int i=0;i<2; i++){
        int next = cur;
        cur = A[next];
    }
    cout << cur << endl;


}