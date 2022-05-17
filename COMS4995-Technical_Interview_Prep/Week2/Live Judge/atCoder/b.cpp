#include <iostream>
#include <vector>
using namespace std;

int main(){

	int H; cin >> H;
 	int W; cin >> W;
	vector<vector<int> > A;
 	for(int i=0; i<H; i++){
      vector<int> B;
      for(int j=0; j<W; j++){
      	int x; cin >> x;
        B.push_back(x);
      }
      A.push_back(B);
    }
    for(int i=0; i<W; i++){
        for(int j=0; j<H; j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

}	