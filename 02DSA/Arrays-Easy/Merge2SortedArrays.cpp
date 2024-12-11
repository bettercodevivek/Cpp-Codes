#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,6};
    int arr2[3]={2,3,5};
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr1[i]<min){
            min=arr1[i];
        }
        if(arr1[i]>max){
            max=arr1[i];
        }
    }
    for(int i=0;i<3;i++){
        if(arr2[i]<min){
            min=arr2[i];
        }
        if(arr2[i]>max){
            max=arr2[i];
        }
    }
    while(min<=max){
        cout<<min<<" ";
        min++;
    }
}