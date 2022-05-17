#include <iostream>
using namespace std;

int main() {

    int T; cin >> T;
    for (int i=0; i<T; i++)
    {
        int n; cin >> n;
        if (n%7==0)
            cout << n << endl;

        else if (n<100){
            int prev = (n/7)*7;
            int next = ((n/7)+1)*7;
            if (prev/10 == n/10)
                cout << prev << endl;
            else
                cout << next << endl; 
        } 

        else{
            if ((n/10)%7==0)
                cout << (n/10)*10 + 7 << endl;
            else if ((n%100)%7 == 0)
                cout << 700 + (n%100) << endl;
            else{
                int prev = (n/7)*7;
                int next = ((n/7)+1)*7;
                if ((prev/10) == n/10)
                    cout << prev << endl;
                else
                    cout << next << endl;
            }
        }
    }
       
}