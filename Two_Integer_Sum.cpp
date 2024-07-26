#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = nums.size();
        for(int i=0;i<x;i++)
        {
            for(int j=x-1;j>i;j--)
            {
                if(nums[i]+nums[j]==target)
                {
                    return{i,j};
                }
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,14,333,23};
    int target = 356;
    vector<int> result = s.twoSum(nums,target);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
