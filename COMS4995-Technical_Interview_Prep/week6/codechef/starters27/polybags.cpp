#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int bags = n/10;
        if (n%10 != 0) bags += 1;
        cout << bags << endl;
    }
}