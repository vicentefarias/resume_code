#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int r; cin >> r;
        int c; cin >> c;
        string s = "";
        for(int j=0; j<2*r+1; j++){
            string row = "";
            for(int k=0; k<2*c+1; k++){
                if (j<2 && k<2) row += ".";
                else if (j%2==0 && k%2==1) row += "+";
                else if (j%2==0 && k%2==0) row += "-";
                else if (j%2==1 && k%2==0) row += "|";
                else row += ".";
            }
            row += "\n";
            s += row;
        }
        cout << "Case #" << i+1 << ":" << endl;
        cout << s;
    }
    return 0;
}