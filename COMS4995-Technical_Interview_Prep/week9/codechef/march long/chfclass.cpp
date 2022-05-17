#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int count = 0;
        if (x%7==6) count++;
        if (x>7) count += (x/7);
        cout << count << endl;
    }
    

}