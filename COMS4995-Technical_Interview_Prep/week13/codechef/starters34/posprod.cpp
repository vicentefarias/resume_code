#include<iostream>
#include<vector>
using namespace std;

int factorial(int x){
    if (x<0) return 0;
    if (x==1||x==0) return 1;
    else if (x==2) return 2;
    else return x*factorial(x-1);
}
int combinations(int n){
    int f1 = factorial(n);
    int f2 = 2*factorial(n-2);
    return f1/f2;
}

int main(){

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        int pos = 0;
        int neg = 0; 
        for(int j=0; j<n; j++){
            int a; cin >> a;
            if (a>0) pos++;
            else if (a<0) neg++;
        }
        cout << combinations(pos) + combinations(neg) << endl;
    }
    return 0;

}