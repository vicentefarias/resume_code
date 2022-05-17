#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string S; cin >> S;
    int a; cin >>a;
    int b; cin >>b;
    swap(S[a-1], S[b-1]);
    cout << S;
}  