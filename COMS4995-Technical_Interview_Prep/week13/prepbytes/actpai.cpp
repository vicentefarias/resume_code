#include <iostream>
#include <vector>
using namespace std;

int main()
{
  //write your code here
  int t; cin >> t;
  for(int i=0; i<t; i++){
    int n; cin >> n;
    int even = 0;
    int odd = 0;
    int count = 0;
    for(int j=0; j<n; j++){
      int x; cin >> x;
      if (x%2) {
        odd += 1;
        count += even;
      }
      else {
        even += 1;
        count += odd;
      }
    }
    cout << count << endl;
  }
  return 0;
}