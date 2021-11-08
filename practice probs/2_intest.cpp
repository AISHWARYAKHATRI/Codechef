#include<iostream>
using namespace std;

int main(){
 int n, k;
 cin >> n>> k;
 int input, count=0;
 for(int i=0;i<n;i++){
     cin >> input;
     if(input%k==0) count++;
 }
 cout << count;
return 0;
}