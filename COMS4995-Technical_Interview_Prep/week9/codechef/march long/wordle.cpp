#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i=0; i<t; i++){
        string S; cin >> S;
        string T; cin >> T;
        string M = "";
        for(int j=0; j<5; j++){
            if (S[j] != T[j]) M += "B";
            else M += 'G';
        }      
        cout << M << endl;
    }
    return 0; 

}