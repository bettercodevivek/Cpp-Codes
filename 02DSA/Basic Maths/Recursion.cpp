// let us understand recursion in cpp for dsa.

#include<iostream>
#include<string>
#include<vector>
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

// int ReverseArray(int n,int arr[]){
//     for(int i=0, j = n-1;i<n && j>0;i++ && j--){
//         int temp;
//           arr[i]=arr[j];
//           arr[j]=temp;
//           temp=arr[i];
//     }
//     return arr;
// }
int main(){
    // countdown(100);
    // cout<<Factorial(5);
    // NamePrinter(10);
    // NumberPrinter(1,200);
    // NumberPrinter2(1,100);
//     int arr[5]={1,2,3,4,5};
//    int i=0,j=5-1,temp;
//    while(i<j){
//       temp=arr[i];
//       arr[i]=arr[j];
//       arr[j]=temp;
//       i++;
//       j--;
//    }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

// vector<int> arr1={1,2,3,4,5,6,7,8,9,10};
// auto itr1= arr1.begin();
// auto itr2 = arr1.end()-1;
// auto itr3=0;
// while(itr1<itr2){
//     itr3=*itr1;
//     *itr1=*itr2;
//     *itr2=itr3;
//     itr1++;
//     itr2--;
// }
// for(int val:arr1){
//     cout<<val<<" ";
// }

}