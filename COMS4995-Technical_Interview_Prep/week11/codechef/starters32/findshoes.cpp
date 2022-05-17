#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
      int n; cin >> n;
      int m; cin >> m;
      if (m>=n) cout<< n << endl;
      else cout << 2*n-m << endl;
   } 

}