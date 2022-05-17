#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++) {
       int c; cin >> c;
       int x; cin >> x;
       int y; cin >> y;
       cout << (c-x)*y << endl;
   }

}