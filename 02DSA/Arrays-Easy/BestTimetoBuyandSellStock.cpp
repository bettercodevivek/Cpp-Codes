#include<iostream>
using namespace std;
int main(){
    int arr[10]={7,1,5,3,6,4};
    int minPrice=INT_MAX;
    int maxProfit=0;

    for(int i=0;i<6;i++){
        if(arr[i]<minPrice){
            minPrice=arr[i];
        }
        else{
            maxProfit=max(maxProfit,arr[i]-minPrice);
    }
    }
    cout<<maxProfit;
}