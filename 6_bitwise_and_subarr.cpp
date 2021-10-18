#include<iostream>
using namespace std;

int AND(int a[], int n){
     int ans = a[0];
     for(int i=0; i<n; ++i){
         ans &= a[i];
     }
         return ans;
     }


int main(){
   int a[3] = {100, 500, 1000};
   int n = sizeof(a)/sizeof(a[0]);
   cout<<AND(a, n);
return 0;
}