#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> wins;
        unordered_map<int, int> played;
        for(int i=0; i<matches.size();i++){
            int w = matches[i][0];
            int l = matches[i][1];
            if (wins.find(w) == wins.end()) wins[w] = 1;
            else wins[w]++;
            if (wins.find(l) == wins.end()) wins[l] = 0;
            if (played.find(w)==played.end()) played[w]=1;
            else played[w]++;
            if (played.find(l)==played.end()) played[l]=1;
            else played[l]++;
        }
        vector<vector<int>> winners;
        for(int i=0; i<2; i++){
            vector<int> players;
            for (const auto & [ key, value ] : wins) {
                if (i==0 && value==played[key]) players.push_back(key);
                if (i==1 && value+1==played[key]) players.push_back(key);
            }
            sort(players.begin(),players.end());
            winners.push_back(players);
        }
        return winners;
    }
};