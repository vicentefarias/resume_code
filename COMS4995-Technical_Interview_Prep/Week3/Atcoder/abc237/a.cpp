#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
    if ((n >= (long long) pow(-2, 31) && (n < (long long) pow(2,31) - 1)))
    	cout << "Yes" << endl;
    else
    	cout << "No" << endl;
}