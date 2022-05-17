#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
 
   unordered_map<int, int> X;
   unordered_map<int, int> Y;
   for(int i=0; i<3; i++){
      int x; cin >> x;
      int y; cin >> y;
      if (X.find(x) == X.end()){
         X[x] = 1;
      }
      else X[x]++;
      if (Y.find(y) == Y.end()) Y[y] = 1;
      else Y[y]++; 
   } 
   vector<int> p;
   for (const auto & [ key, value ] : X) {
   if (value == 1) p.push_back(key);
   }   
   for (const auto & [ key, value ] : Y) {
      if (value == 1) p.push_back(key);
   }  
   cout << p[0] << " " << p[1];
 
}