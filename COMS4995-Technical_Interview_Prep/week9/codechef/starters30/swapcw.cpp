#include <iostream>
#include <algorithm>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        string sortedS = s;
        sort(sortedS.begin(), sortedS.end());
        for(int j=0; j<n; j++){
            if (sortedS[j] != s[j] && sortedS[j] != s[n-j-1]){
                cout << "No" << endl;
                break;
            }
            else if (j==n-1) cout << "Yes"<<endl;
        }
   }

}