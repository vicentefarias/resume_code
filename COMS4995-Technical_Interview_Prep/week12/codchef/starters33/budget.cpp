#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int x; cin >> x;
       int y; cin >> y;
       if (x >= y*30) cout << "YES" << endl;
       else cout << "NO" << endl;
   } 
   return 0;

}