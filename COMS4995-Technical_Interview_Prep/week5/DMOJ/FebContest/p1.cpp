#include <iostream>
#include <string>
using namespace std;

int main() {

    int D; cin >> D;
    string s; cin >> s;
    for(int i=0; i<D; i++){
        if (int(s[i]) < int(s[i+1])){
            swap(s[i], s[i+1]);
            break;
        }
    }
    cout << s;
}