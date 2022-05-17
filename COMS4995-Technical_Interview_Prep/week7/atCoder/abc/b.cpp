#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N; cin >> N;
    int M; cin >> M;
    vector<int> A;
    vector<int> B;

    for(int i=0; i<N; i++){
        int x; cin >> x;
        A.push_back(x);
    }

    for(int i=0; i<M; i++){
        int x; cin >> x;
        if (find(A.begin(), A.end(), x) != A.end()) A.erase(find(A.begin(), A.end(), x));
        else {
            cout << "No" << endl;
            break;
        }
        if (A.size() == 0 && i != M-1) {
            cout << "No" << endl;
            break;
        }
        if (i == M-1) cout << "Yes" << endl;
    }


}