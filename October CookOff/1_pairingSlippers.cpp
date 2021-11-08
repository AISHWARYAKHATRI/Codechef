#include<iostream>
using namespace std;

void pairingSlippers(int n, int l, int x){
        int r = n - l;
        int min = r;
        if(l <= min ){
            min = l;
        }
        else
        min = r;

        cout << min*x;
}

int main(){
     int T;
     cin >> T;
     int N, L, X;
     for(int i=0; i<T; i++){
         cin >> N >> L >> X;
         pairingSlippers(N, L, X);
     }
return 0;
}