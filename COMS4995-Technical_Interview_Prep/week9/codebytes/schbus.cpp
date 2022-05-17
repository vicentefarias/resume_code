#include <iostream>
using namespace std;

int main()
{
  //write your code here
  int t; cin >> t;
  for(int i=0;i<t;i++){
    int n; cin >> n;
    int c; cin >> c;
    int q = n / c;
    if (q * c < n) ++q;
    cout << q << endl;
  }
  
  return 0;
}