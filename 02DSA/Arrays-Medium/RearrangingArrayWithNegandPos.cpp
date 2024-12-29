#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> positiveNums;
        // vector<int> negativeNums;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         positiveNums.push_back(nums[i]);
        //     }
        //     else{
        //         negativeNums.push_back(nums[i]);
        //     }
        // }

        // int i=0;
        // int j=0;
        // nums.erase(nums.begin(),nums.end());
        // while(i<positiveNums.size() || j<negativeNums.size()){
        //         nums.push_back(positiveNums[i]);
        //         nums.push_back(negativeNums[i]);

        //         i++;
        //         j++;
        // }
        // return nums;
        

        // alternate optimal solution using 2 pointers
        vector<int> result(nums.size());

        int positive=0,negative=1;

        for(int num:nums){
            if(num>0){
                result[positive]=num;
                positive=positive+2;
            }
            else{
                result[negative]=num;
                negative=negative+2;
            }
        }
        return result;
    }
};
