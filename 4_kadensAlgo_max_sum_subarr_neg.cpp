//largest sum contagious subarr
#include<iostream>
using namespace std;

int maxSumSubArr(int a[], int n){
    int max=a[0], curr=0;   
    for(int i=1; i<n ;i++){
        curr = a[i];
        if(curr>max){
            max = curr;
        }
        else if(curr<max){
            curr = 0;
        }
    }
return max;
}

       
int main(){
       int arr[5] = {-9,-2,-3,-8, -1};
       int n = sizeof(arr)/sizeof(arr[0]);
      cout<< maxSumSubArr(arr, n);
return 0;
}