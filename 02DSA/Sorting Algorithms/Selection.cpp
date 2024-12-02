#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={13,46,24,52,20,9};
    for(int i=0;i<5;i++){
        int minIndex=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    PrintArray(arr,6);
    return 0;
}