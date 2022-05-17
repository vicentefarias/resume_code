#include <iostream>
#include <string>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
        int n; cin >> n;
        int sum = 0;
        string s = to_string(n);
        for(int i=0; i<s.size(); i++){
            sum += int(s[i]) - '0';
        }
        int odd = (sum%2);
        int next = n+1;
        int nsum = 0;
        string ns = to_string(next);
        for(int i=0; i<ns.size(); i++){
            nsum += int(ns[i]) - '0';
        } 
        int nodd = (nsum%2);
        if (odd ^ nodd) cout << next << endl;
        else cout << next+1 << endl;
   }
    return 0;

}