#include <iostream>
using namespace std;

int main() {

	int a; cin >> a;
  	int b; cin >> b;
 	if (a==1){
      	if (b==10 || b==2) cout << "Yes";
		else
        	cout << "No" << endl;
    }
  	if (a==10){
    	if (b==1 || b==9) cout << "Yes";
		else
          	cout << "No" << endl;
    }
	else if (a > 1 && a < 10){
        if (b == a + 1 || b==a-1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }    
}
