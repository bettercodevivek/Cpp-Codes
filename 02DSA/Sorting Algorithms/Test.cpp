#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
         if(arr[j]<arr[minIndex]){
            minIndex=j;
         }
        }
       int temp=arr[i];
       arr[i]=arr[minIndex];
       arr[minIndex]=temp;
    }
}
void Bubble(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Insertion(int arr[],int n){
    for(int i=0;i<n;i++){
       int j=i;
       while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
       }
        }
    
}
int main(){
     
     int arr1[6]={5,9,2,1,12,4};
    //  selection(arr1,6);
    //  Bubble(arr1,6);
    Insertion(arr1,6);
     for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
     }



    return 0;
}