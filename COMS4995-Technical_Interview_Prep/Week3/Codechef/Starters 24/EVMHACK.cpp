#include <iostream>
#include <vector>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        vector<int> cities;
        int currentvotes = 0;
        for(int j=0; j<3; j++){
            int A; cin >> A;
            cities.push_back(A);
            currentvotes += A;
    }
        vector<int> votes;
        int totalvotes = 0;
        for(int j=0; j<3; j++){
            int P; cin >> P;
            votes.push_back(P);
            totalvotes += P;
        }
        for(int j=0; j<3; j++){
            if (float(currentvotes + votes[j] - cities[j] > float(totalvotes/2.0))){
                cout << "YES" << endl;
                break;
            }
            else if (j == 2)
                cout << "NO" << endl; 
        } 

    }
    return 0;
}