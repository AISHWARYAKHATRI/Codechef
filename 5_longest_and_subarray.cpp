#include<iostream>
using namespace std;

int func(int n){
    int A, B=0, C;
    for(int i=1; i<=n; i=2*i){
        A = i;
    }
    B = (n-A)+1;
    C = max((A/2), B);
    return C;
}

int main(){
    int T, N;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>N;
        cout<<func(N);
    }
return 0;
}