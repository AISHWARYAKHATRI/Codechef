//largest sum contagious subarr

#include<iostream>
using namespace std;

int maxSumSubArr(int a[], int n){
    int curr_sum = 0;
    int max_sum = 0;
    for(int i=0; i<n ;i++){
        curr_sum += a[i];

        if(curr_sum>max_sum){
            max_sum=curr_sum;        

    }
    else if(curr_sum<max_sum){
        curr_sum = 0;
    }
}
return max_sum;
}
       
int main(){
       int arr[3] = {9,2,3};
       int n = sizeof(arr)/sizeof(arr[0]);
      cout<< maxSumSubArr(arr, n);
return 0;
}