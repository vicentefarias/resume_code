#include <iostream>
#include <algorithm>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
        int n; cin >> n;
        string s; cin >> s;
        int o = count(s.begin(), s.end(), '1');
        int z = n - o;
        if (z==o) cout << n << endl;
        else if (z<o) cout << 2*z+ 1 << endl;
        else cout << 2*o + 1 << endl; 
   } 

}