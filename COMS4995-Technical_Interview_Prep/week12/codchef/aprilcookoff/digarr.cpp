#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
    for(int i=0; i<t; i++){
      int d; cin >> d;
      string s; cin >> s;
      for(int i=0; i<d; i++){
        if (s[i]=='0' || s[i]=='5'){
            cout << "Yes" << endl;
            break;
        }
        if (i==d-1) cout << "No" << endl;
      }
   } 

}