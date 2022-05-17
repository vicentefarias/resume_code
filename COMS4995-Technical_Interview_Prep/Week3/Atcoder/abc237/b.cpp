#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int N; cin >> N;
    unordered_map<int, int> m;
    for(int i=0; i<4*N-1; i++){
        int cur; cin >> cur;
        if (m.find(cur) == m.end())
            m[cur] = 1;
        else
            m[cur]++;
    }
    for (pair<int, int> elem: m){
        if (elem.second == 3)
            cout << elem.first;
    }
}  
