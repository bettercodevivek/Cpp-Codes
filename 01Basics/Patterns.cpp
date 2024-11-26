#include<iostream>
#include<math.h>
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

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
      
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
          cout<<endl;
    }
}

int ReverseNum(int n){
    int rev=0,rem;
    while(n>0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    return rev;
}

bool palindrome(int n)
{
    int rev=0,rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    int value = rev;
    if(value == n){
        return true;
    }
    else{
        return false;
    }
}

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=n;j>0;j=j-2){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
// void pattern10(int n){
//     int i=1;
//   if(i<n/2){
//      for(i;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//      }
//   }
//   else if(i>=n/2){
//     for(i=n/2;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//   }
// }
void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
            if(j%2!=0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            }
            if(i%2==0){
                 if(j%2!=0){
                cout<<0;
            }
            else{
                cout<<1;
            }
            }
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=1;i<=n;i++){
        int alph=97;
        for(int j=1;j<=i;j++){
           cout<<(char)alph<<" ";
           alph++;
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
  // pattern7(10);
 // pattern8(10);
// pattern11(5);
// pattern10(9);
// pattern13(5);
pattern14(10);
}