#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t){
		int n; cin >> n;
		int x; cin >> x;
		int y; cin >> y;
		for(int i=2; i<n; i++){
			if (i%x==0 && i%y != 0)
			cout << i;
			cout << " ";
		}
		cout << "\n";
		t--;
	}
	return 0;
}