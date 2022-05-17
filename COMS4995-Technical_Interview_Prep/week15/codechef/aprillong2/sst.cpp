#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int a; cin >> a; 
        int b; cin >> b;
        if (a*10 > b*5) cout << "first" << endl;
        else if (a*10==b*5) cout << "any" << endl;
        else cout << "second" << endl;   
    }
    return 0;
}