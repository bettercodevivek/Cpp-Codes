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

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1;i<=n/2;i++){
      for(int j=1;j<=i;j=j++){
        cout<<"*";
        cout<<" "<<endl;
      }
      cout<<endl;
    }
}
int main(){
    // pattern1(5);
    // pattern2(10);
    // pattern3(10);
    // pattern4(10);
    // pattern5(5);
    // pattern6(10);
    pattern7(10);
}