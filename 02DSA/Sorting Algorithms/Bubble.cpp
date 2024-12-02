#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,12,9,11,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}