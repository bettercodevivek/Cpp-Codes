// Seive of Eratosthenes is a famous algorithm used to find prime numbers upto a given n.
// time complexity :- O(n log log n)

#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n){
vector<bool> primes(n+1,true);
 primes[0]=primes[1]=false;

 for(int i=2;i*i <= n;i++){
    if(primes[i]){
        for(int j=i*i;j<n;j+=i){
            primes[j]=false;
        }
    }
 }

 for(int i=0;i<n;i++){
    if(primes[i]){
        cout<<i<<" ";
    }
 }
}

int main(){
    SieveOfEratosthenes(30);
    return 0;
}