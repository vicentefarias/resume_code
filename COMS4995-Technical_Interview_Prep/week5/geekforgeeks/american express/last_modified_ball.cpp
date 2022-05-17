#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        for(int i=A.size()-1; i>-1; i--){
           N -= (9-A[i]);
           if (A[i]<9) return i+1;
           if (N<1) return i+1;
        }
    return 0;
    }
};