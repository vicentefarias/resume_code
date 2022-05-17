#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int n; cin >> n;
       int x; cin >> x;
       if (x>=n && x%n==0) cout << "YES" << endl;
       else cout << "NO" << endl;
   }
   return 0;

}