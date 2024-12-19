#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter your number"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i*i==0){
            count++;
        }
        i++;
    }
    if(count==0){
        cout<<true;
    }
    else{
        cout<<false;
    }
}