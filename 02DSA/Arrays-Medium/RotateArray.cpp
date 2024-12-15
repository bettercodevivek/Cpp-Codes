// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// input ==> nums = [1,2,3,4,5,6,7], k = 3

// output ==> [5,6,7,1,2,3,4]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int n=nums.size();

    // we will update k as k%n because if k>n then we need to only perform remainder rotations as number of rotations equal to the size of array itself will return the original array.
    int k=3;
    k=k%n;
   // 1. First we reverse the whole array
    reverse(nums.begin(),nums.end());

    // 2. now we reverse the first k elements

    reverse(nums.begin(),nums.begin()+k);

    // 3. now we reverse the remaining elements
    reverse(nums.begin()+k,nums.end());

    for(int num : nums){
        cout<<num<<" ";
    }
}