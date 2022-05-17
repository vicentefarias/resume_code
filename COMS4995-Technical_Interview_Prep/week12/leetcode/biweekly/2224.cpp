#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int convertTime(string current, string correct) {
        int op = 0;
        int hour = stoi(correct.substr(0,2)) - stoi(current.substr(0,2));
        int min = stoi(correct.substr(3,5)) - stoi(current.substr(3,5));
        if (min<0){
            hour-=1;
            min+=60;
        }
        return hour + (min/15) + (min%15)/5 + (min%5);
    }
};