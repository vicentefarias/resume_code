#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x; cin >> x;
	while (x != 42){
		cout << x;
        cout << endl;
		cin >> x;
	}
	return 0;
}