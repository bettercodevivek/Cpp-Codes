#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,1,0,1,1,1,0,1,1,};
    int count=0,MaxCount=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        if(count>MaxCount){
            MaxCount=count;
        }
    }
    cout<<MaxCount;
    return 0;
}