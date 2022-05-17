#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        vector<int> fruits;
        for(int j=0;j<3;j++){
            int f; cin >> f;
            fruits.push_back(f);
        }
        sort(fruits.begin(), fruits.end());
        cout << (x-1)*fruits[0] + fruits[1] << endl;

    }





}