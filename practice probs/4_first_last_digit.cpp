#include<iostream>
using namespace std;

int main(){
 int T;
 cin >> T;
 while(T--){
     int n, f, sum=0;
     cin >> n;
     for(int i=n;i>0;i/=10){
       f = i;
 }
 sum = f+n%10;
cout << sum <<endl;
 }
return 0;
}