#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int max; cin >> max;
        for(int j=0; j<2; j++){
            int temp; cin >> temp;
            if (temp > max) max = temp;
        }
        cout << max << endl;
    }
   return 0; 

}