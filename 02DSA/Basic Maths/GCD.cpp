//  Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int GCD(int num1,int num2){
    vector<int> v;
    for(int i=1;i<=num2;i++){
       if(num1%i==0 && num2%i==0){
        v.push_back(i);
       }
    }
    sort(v.begin(),v.end());

    return v[v.size()-1];
}

// This was the brute force approach and we wish to have a better a time complexity so, we will use a optimal approach. 
// The Euclidean Algorithm is a method for finding the greatest common divisor of two numbers. It operates on the principle that the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number.

int EuclideanGCD(int num1, int num2) {
    while (num1 > 0 && num2 > 0) {
        if (num1 > num2) {
            num1 = num1 % num2;
        } else {
            num2 = num2 % num1;
        }
    }
    return (num1 == 0) ? num2 : num1; // Return the non-zero value
}

int main(){
    cout<<EuclideanGCD(9,12);
}