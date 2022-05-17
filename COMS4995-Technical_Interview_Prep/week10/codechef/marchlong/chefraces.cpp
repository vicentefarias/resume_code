#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
        int x; cin >> x;
        int y; cin >> y;
        int a; cin >> a;
        int b; cin >> b;
        int count = 2;
        if (x==a||x==b) count--;
        if (y==a||y==b) count--;
        cout << count << endl;
   } 

}