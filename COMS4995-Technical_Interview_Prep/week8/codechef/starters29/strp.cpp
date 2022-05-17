#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        string s; cin >> s;
        int op = 0;
        while (s.size() > 0){
            if (s.size() != 1){
                if (s[0] == s[1]) s = s.substr(2,n);
                else s = s.substr(1,n);
            }
            else{
                s = "";
            }   
            op++;
        }
        cout << op<< endl;
    }

}