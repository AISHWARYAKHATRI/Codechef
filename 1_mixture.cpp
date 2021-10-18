#include<iostream>
using namespace std;

string my_fun(int x, int y){
      if(x>0 && y>0){
          return "Solution";
      }
      else if(y==0){
          return "Solid";
      }
      else if(x==0){
          return "Liquid";
      }
}

int main(){
int A, B, T, i;
cin>>T;
string j[T+1];
for(i=1;i<=T;i++){
    cin>>A>>B;
    j[i] = my_fun(A, B);
}
for(i=1;i<=T;i++){
   cout<<j[i]<<"\n";
}

return 0;
}