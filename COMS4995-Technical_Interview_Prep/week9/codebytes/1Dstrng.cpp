#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        string s; cin >> s;
        set<int> e; 
        for(int j=0; j<s.size(); j++){
                e.insert(int(s[j]));
        }
        vector<int> v(e.begin(), e.end());
        int min = *min_element(v.begin(), v.end());
        int max = *max_element(v.begin(), v.end());
        while(min <= max){
            if (find(v.begin(), v.end(), min) == v.end()){
                cout << "0D" << endl;
                break;
            }
            else if (min == max) cout << "1D" << endl;
            min++;
       }
    }

}