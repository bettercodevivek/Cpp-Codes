/*  Brute Force Approach
    The steps are as follows:
    First, we will run a loop(say i) to select the elements of the array one by one.
    For every element arr[i], we will perform a linear search using another loop and count its occurrence.
    If for any element the occurrence is 1, we will return it.*/


// Optimal Approach

/*
Two important properties of XOR are the following:

XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2

Here all the numbers except the single number appear twice and so will form a pair. Now, if we perform XOR of all elements of the array, the XOR of each pair will result in 0 according to the XOR property 1. The result will be = 0 ^ (single number) = single number (according to property 2).

So, if we perform the XOR of all the numbers of the array elements, we will be left with a single number.
Approach:

    We will just perform the XOR of all elements of the array using a loop and the final XOR will be the answer.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,4,6,4,3};
    int xorr=0;
    for(int i=0;i<nums.size();i++){
         xorr=xorr^nums[i];
    }
    cout<<xorr;
}