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
void NumberPrinter(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    NumberPrinter(i+1,n); 
}
void NumberPrinter2(int i,int n){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    NumberPrinter2(i,n-1);
}
int SumOfNum(int n){
    if(n==0){
        return 0;
    }
    return n+SumOfNum(n-1);
    
}

// int Factorial1(int n){
//    int factorial=1;
//    while(n>0){
//     factorial=factorial*n;
//     n--;
//    }
//    return factorial;
// }

void ReverseArray(int n){
    
}
int main(){
    // countdown(100);
    // cout<<Factorial(5);
    // NamePrinter(10);
    // NumberPrinter(1,200);
    // NumberPrinter2(1,100);
 
}