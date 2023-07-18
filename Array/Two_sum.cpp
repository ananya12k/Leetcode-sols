/*1. Two Sum
Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 */
#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target)
                {
                    ans[0]=i;
                    ans[1]=j;
                   return ans;
                }
                else{
                    continue;
                }
                
            }
        }
        return ans;
        
    }
};
using namespace std;
int main()
{
    Solution s=Solution();
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=s.twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
return 0;
}