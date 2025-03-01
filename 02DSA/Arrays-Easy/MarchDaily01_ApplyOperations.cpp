// Problem Statement

/*
You are given a 0-indexed array nums of size n consisting of non-negative integers.

You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of nums:

    If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.

After performing all the operations, shift all the 0's to the end of the array.

    For example, the array [1,0,2,0,0,1] after shifting all its 0's to the end, is [1,2,1,0,0,0].

Return the resulting array.

Note that the operations are applied sequentially, not all at once.*/


// Approach 

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            int pos = 0;
            if(n == 1){
                return nums;
            }
            for(int i=0;i<n-1;i++){
                if(nums[i] == nums[i+1]){
                    nums[i] = 2*nums[i+1];
                    nums[i+1] = 0;
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i] != 0){
                    swap(nums[i],nums[pos]);
                    pos++;
                }
            }
            return nums;
        }
    };

    // The approach is to use 2 for loops :-

    // 1st loop = it performs the mentioned operations on all the values.

    // 2nd loop = it runs from 0th index and check if the element is non-zero, if it is true then it swaps the value with nums[pos], where pos is initialised with 0 and is update as pos++ with every swap.
    // this approach ensures all zeroes move to the end and relative order of the non-zero values in maintained