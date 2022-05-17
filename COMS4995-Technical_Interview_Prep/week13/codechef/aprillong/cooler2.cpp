#include <iostream>
using namespace std;

int main() {

   int t; cin >> t;
   for(int i=0; i<t; i++){
       int x; cin >> x;
       int y; cin >> y;
       int m=0;
       while(m*x<y){
           m++;
       }
       if (m*x>=y) m--;
       cout << m << endl;
   } 

}