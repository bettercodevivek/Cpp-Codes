/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         nums.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==1){
        //         nums.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==2){
        //         nums.push_back(nums[i]);
        //     }
        // }
        // nums.erase(nums.begin(),nums.begin()+n);

        // The above approach is functional but not exactly optimal as it increases the space comp
        // lexity to O(n). We should solve this in-place, thus we will use the dutch national
        // flag algorithm

        int start=0;
        int mid=0;
        int end=nums.size()-1;

        while(mid<=end){
            switch(nums[mid]){
                case 0 : swap(nums[mid],nums[start]);
                         start++;
                         mid++;
                         break;
                
                case 1 : mid++;
                         break;

                case 2 : swap(nums[mid],nums[end]);
                         end--;
                         break;
            }
        }
    }
};