#include<iostream>
using namespace std;
int main(){
   
   int arr[6]={4,7,1,12,5,3};

   for(int i=0;i<6;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
   }

   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }



    return 0;
}