#include <iostream>
#include <math.h>
using namespace std;

int main() {

   long a; cin >> a;
   long b; cin >> b; 
   long k; cin >> k;
   long ret = log(b/a)/log(k);
   if (a*pow(k,ret)<b) ret+=1;
   cout << ret << endl;
}