#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int x; cin >> x;
       int y; cin >> y;
       int m; cin >> m;
       if (m*x<y) cout << "YES" << endl;
       else cout << "NO" << endl;
   } 

}