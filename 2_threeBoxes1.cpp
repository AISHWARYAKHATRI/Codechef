#include<iostream>
using namespace std;

int my_fun(int x,int y,int z, int sum){
    if(x+y+z<=sum){
        return 1;
    }
    else if(x+y<=sum){
        return 2;
    }
    else
    return 3;
}
int main(){
    int T;
    cin>>T;
    int i, j[T+1], A, B, C, D;
    
    for(i=1;i<=T;i++){
        cin>>A>>B>>C>>D;
        j[i]=my_fun(A,B,C,D);

    }
    for(i=1;i<=T;i++){
        cout<<j[i]<<endl;
    }

}
