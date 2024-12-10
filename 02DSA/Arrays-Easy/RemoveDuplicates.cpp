#include<iostream>
#include<vector>
using namespace std;

// Here, we are using two pointers i and j, where i is basically poiting towards the unique element whereas j iterates through the array and tells i about unique element.
// after this, i increases 1 index and stores the unique element by overwriting on current value.

int main(){
    vector<int> nums = {1,1,2};
    int i=0;
    for(int j=1;j<nums.size();j++){
         if(nums[j]!=nums[i]){
            i++;
             nums[i]=nums[j];
         }
    }
    cout<<i+1<<endl;
}