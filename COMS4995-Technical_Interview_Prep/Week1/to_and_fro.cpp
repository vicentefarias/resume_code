
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    int c; cin >> c;
    while (c != 0){
        string s; cin >> s;
        string dec ("");
        for(int i=0; i<s.size(); i++){
            if ((i/c)%2==0) dec += s[i];
            else dec += s[((i/c)+1)*c - (i%c)-1];
        }
        string msg ("");
        for(int i=0; i<c; i++){
            int j=i;
            while (j<dec.size()){
                msg += dec[j];
                j += c;
            }
        }
        cout << msg;
        cout << endl;
        cin >> c;
    }
    
    return 0;

}