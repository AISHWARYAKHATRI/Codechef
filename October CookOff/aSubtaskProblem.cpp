#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int  sum=0, ans=0;
    int N, M, K, A[N];
    while(T--){
    
    cin>>N>>M>>K;
    }

    for(int i=1;i<=N;i++){
        cin>>A[i];
        sum+=A[i];
        if(i==M && sum==2){
            ans = K;
        }
    }
    // if(sum==N){
    //     ans = 100;
    // }
    // cout<<ans;
    return 0;
}