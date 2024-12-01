// let us understand recursion in cpp for dsa.

#include<iostream>
#include<string>
using namespace std;

void countdown(int n){
    if(n==0){
        cout<<"lets go!!!"<<endl;
        return;
    }
    cout<<n<<endl;
    countdown(n-1);
}

int Factorial(int n){
    if(n==1){
        return 1;
    }
    return n*Factorial(n-1);
}

void NamePrinter(int n){
    string name="vivek";
   if(n==0){
    return;
   }
   cout<<name<<endl;
   NamePrinter(n-1);
}
int main(){
    // countdown(100);
    // cout<<Factorial(5);
    NamePrinter(10);
}