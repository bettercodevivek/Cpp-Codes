/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

// we can use the brute force approach of simply using 2 nested for loops and checking for each element in array if the sum equals to target but it is inefficient as the time complexity becomes O(n^2);

// so we will use a optimised solution using unordered maps for hash maps with time complexity of O(n) as every operation in unordered map is of complexity = O(1);

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int,int> NumIndex;
    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        if(NumIndex.find(diff)!=NumIndex.end()){
            return{NumIndex[diff],i};
        }
        else{
            NumIndex.insert({nums[i],i});
        }
    }
    return {};
}

int main(){
    vector<int> nums = {5,3,9,12,19};
 vector<int>result=twoSum(nums,21);

 for(int number:result){
    cout<<number<<" ";
 }
}