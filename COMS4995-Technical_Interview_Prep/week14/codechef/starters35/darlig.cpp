#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int n; cin >> n;
       int k; cin >> k;
       if (k==0){
            if (n%4==0) cout << "off" << endl;
            else cout << "on" << endl;
       }
       else{
           if (n==0) cout << "on" << endl;
           else cout << "Ambiguous" << endl;
       }
   } 
   return 0;

}