#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={12,233,234,56,61,34,345};
    vector<int> n;
    int smallest=INT_MAX,largest=INT_MIN;
    int secondSmallest=INT_MAX,secondLargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
       smallest=min(smallest,arr[i]);
       largest=max(largest,arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]<secondSmallest && arr[i]!=smallest){
            secondSmallest=arr[i];
        }
        if(arr[i]>secondLargest && arr[i]!=secondLargest){
            secondLargest=arr[i];
        }

       }
       cout<<secondLargest<<secondSmallest;
    }