// question => You are given an array of integers nums. Return the length of the longest subarray 
// of nums which is either strictly increasing or strictly decreasing.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
     public:
     int LongestMonotonicSubArray(vector<int>& nums){
        
         // Initialise 2 different variables, Icount to store length of strictly increasing subarray and Dcount to store length of strictly decreasing subarray, assign initial value 1 to both.
         // Also initialise a variable MaxCount as 1, to store the max length

         int Icount=1,Dcount=1,MaxCount=1;

         // initialise a for loop and compare each element with its previous element and perform the following 3 conditionals :- 
         // 1. if (nums[i]>nums[i-1]), means its a increasing subarray, increase Icount value and make Dcount=1;
         // 2. if (nums[i]<nums[i-1]), means its a decreasing subarray, increase Dcount value and make ICount=1;
         // 3. if (nums[i]==nums[i-1]), both values equal, make Dcount and Icount both equal to 1;

         for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                Icount++;
                Dcount=1;
            }
            else if(nums[i] < nums[i-1]){
                Dcount++;
                Icount=1;
            }
            else {
                Dcount=1;
                Icount=1;
            }
            MaxCount=max(MaxCount,max(Icount,Dcount));
         }


     }
};