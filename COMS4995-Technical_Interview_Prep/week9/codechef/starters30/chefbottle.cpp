#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++) {
       int n; cin >> n;
       int x; cin >> x;
       int k; cin >> k;
       int bottles = k/x;
       if (bottles > n) cout << n << endl;
       else cout << bottles << endl;
   }

}