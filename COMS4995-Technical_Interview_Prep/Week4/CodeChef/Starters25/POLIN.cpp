#include <iostream>
#include <set>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0;i<T;i++){
        int N; cin >> N;
        set<int> x;
        set<int> y;
        for(int j=0; j<N; j++){
            int xi; cin >> xi;
            int yi; cin >> yi;
            x.insert(xi); 
            y.insert(yi);
        }
        cout << x.size() + y.size() << endl;
    }
}