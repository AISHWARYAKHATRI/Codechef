#include<iostream>
using namespace std;

string goldMine(int n, int x, int y){
    if(((n+1)*y)>x){
        return "yes";
    }
    else
    return "no";
}

int main(){
   int T;
   int N, X, Y;
   cin>>T;
   for(int i=0; i<T; i++){
       cin>>N>>X>>Y;
       cout<<goldMine(N, X, Y);
   }
return 0;
}