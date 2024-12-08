#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,0,2,0,3,4,0,6};
    // int count=0;
    // for(auto itr=nums.begin();itr<nums.end();){
    //     if(*itr==0){
    //         nums.erase(itr);
    //         itr=nums.begin();
    //         count++;
    //     }
    //     else{
    //         itr++;
    //     }
   
    // }
    // for(int i=0;i<count;i++){
    //     nums.push_back(0);
    // }
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    
// The above solution has a time complexity of about O(n.k+k).
// therefore we need a more optimised solution, so we will use 2 pointer approach.

int n=nums.size();
int j=0;

for(int i=0;i<n;i++){
    if(nums[i]!=0){
        nums[j]=nums[i];
        j++;
    }
}

for(int i=j;i<n;i++){
    nums[i]=0;
}

for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
}

}

