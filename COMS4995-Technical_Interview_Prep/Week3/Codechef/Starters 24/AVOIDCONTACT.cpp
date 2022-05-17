#include <iostream>
using namespace std;

int main(){

    int T; cin >> T;
    for(int i=0; i<T; i++){
        int x; cin >> x;
        int y; cin >> y;
        int z = x - y;   
        int count = 0;
        for(int j=0; j<y; j++){
            count += 2;
            if (j==y-1)
                count-=1;
        } 
        if (z > 0){
            count += z;
            if (y > 0)
                count += 1;
        } 
        cout << count << endl;
        
    }
    return 0;

}