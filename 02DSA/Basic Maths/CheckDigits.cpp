// problem statement :- You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.

#include<iostream>
using namespace std;

int countDigits(int n){
	int rem=0,count=0;
	int value=n;

	while(n!= 0){
		rem=n%10;
		if(rem>0){
                  if (value % rem == 0) {
                    count++;
                  }
                }
                n=n/10;
	}
	return count;
}

int main(){
    int val=countDigits(336);
    cout<<val;
    return 0;
}


