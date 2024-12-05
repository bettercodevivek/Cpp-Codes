#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void MergeSort(vector<int> &arr,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}
int main(){
    vector<int> arr1 = {5,9,2,1,12,4};
    MergeSort(arr1,0,5);
    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
}