#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int n; cin >> n;
       if (n%4) cout << (n/4)+1 << endl;
       else cout << (n/4) << endl;
   } 
   return 0;

}