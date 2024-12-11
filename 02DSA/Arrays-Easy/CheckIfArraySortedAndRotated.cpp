#include<iostream>
using namespace std;
int main(){
    int arr[4]={2,1,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count=0;

    // we will simply apply 2 logics to solve this question optimally.
    // 1st :- iterate through the array, and check if at any point arr[i]<arr[i+1], and this should happen only once, if so then array has been rotated.
    // 2nd :- check if last element of array is smaller than first element of array , if this is so then we can say that the array is sorted and rotated but it is important to add 
    // a check for just sorted array, for that at no point arr[i]>arr[i+1] and first element should be smaller than or equal to last element.

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count==0 && arr[0]<=arr[n-1]){
        cout<<true;
    }
    if(count==1 && arr[n-1]<=arr[0]){
        cout<<true;
    }
    else{
        cout<<false;
    }

}