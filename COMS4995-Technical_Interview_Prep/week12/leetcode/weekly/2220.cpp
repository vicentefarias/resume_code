#include <iostream>
#include <bitset>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> b1(start);
        bitset<32> b2(goal);
        cout << b2 << endl;
        cout << b1 << endl;
        int count = 0;
        for(int i=0; i<32; i++){
            if (b1[i]!=b2[i]) count++; 
        }        
        return count;
    }
};