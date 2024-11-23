#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    // pattern1(5);
    // pattern2(10);
    pattern3(10);
}