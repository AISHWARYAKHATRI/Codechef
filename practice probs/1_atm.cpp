#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   int wAmount;
   float tAmount;
   cin>>wAmount;
   cin>>tAmount;
   if((wAmount%5==0) && (wAmount+0.5<=tAmount)){
       cout << fixed << setprecision (2) << (tAmount-wAmount-0.50);
   }
   else 
   cout << fixed << setprecision(2) << tAmount;
return 0;
}