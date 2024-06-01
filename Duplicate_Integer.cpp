#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int x=nums.size();
        for(int i=0;i<x;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    cout << s.hasDuplicate(nums) << endl;
    return 0;
}
