#include <iostream>
#include <vector>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        int N; cin >> N;
        int X; cin >> X;
        int Y; cin >> Y;
        vector<int> A;
        vector<int> B;
        for(int j=0; j<N; j++){
            int a; cin >> a;
            A.push_back(a);
        }

        for(int j=0; j<N; j++){
            int b; cin >> b;
            B.push_back(b);
        }
        
        for(int j=0; j<N; j++){
            if (B[j] != A[j] + X && B[j] != A[j] + Y){
                cout << "No" << endl;
                break;
            }
            else if (j == N-1){
                cout << "Yes" << endl;
            }
        } 
    }
    return 0;
}