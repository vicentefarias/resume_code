#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s; cin >> s;
    for(int i=0; i<10; i++){
        string c = to_string(i);
        if (count(s.begin(), s.end(), c[0])==0){
            cout << c << endl;
            break;
        }
    }
    return 0;

}