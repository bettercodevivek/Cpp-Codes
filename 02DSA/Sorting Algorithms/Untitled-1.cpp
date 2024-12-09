#include<iostream>
using namespace std;
void Selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int begin=i;
        for(int j=i+1;j<n;j++){
              if(arr[j]<arr[begin]){
                begin=j;
              }
        }
        int temp=arr[i];
        arr[i]=arr[begin];
        arr[begin]=temp;
    }
}
void Bubble(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int j=0;
        while(j<i){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
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
void RecursiveBubble(int arr[],int n,int j,int i){
    if(i<=0){
        return;
    }
    else{
        if(j<i && arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        RecursiveBubble(arr,n,j++,i--);
    }
}
int main(){
    int arr1[6]={3,8,2,4,6,1};
    RecursiveBubble(arr1,6,0,5);
    for(int value:arr1){
        cout<<value<<"  ";
    }
}