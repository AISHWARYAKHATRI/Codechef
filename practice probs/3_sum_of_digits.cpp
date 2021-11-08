#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
	int n;

	    cin >> n;
	    int sum=0;
	    for(int i=n;i>0;i/=10){  //makes the number smaller (i/=10)
	        sum = sum + i%10;    //gives the last digit
	    }
        cout << sum << endl;
	}
	return 0;
}
