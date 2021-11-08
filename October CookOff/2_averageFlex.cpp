#include<iostream>
using namespace std;

int main(){
  int T;
  cin >> T;

  for(int i = 0; i<T; i++){
      int N;
      cin >> N;
      int sum = 0;
          int A[N];

      for(int i=0; i<N; i++){
          cin >> A[i];
      }
      int less, more, count=0;
      for(int i=0; i<N; i++){
          less=0, more=0;
          for(int j=0; j<N; j++){
               if(A[j]<=A[i]) less++;
               if(A[j]>A[i]) more++;
          }
          if(less>more) count++;
      }
          cout << count << endl;
          }
return 0;
}