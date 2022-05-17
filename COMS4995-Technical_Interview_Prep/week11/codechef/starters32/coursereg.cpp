#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
      int m; cin >> m;
      int n; cin >> n;
      int k; cin >> k;
      if (m<=n-k) cout << "Yes" << endl;
      else cout << "No" << endl;
   } 

}