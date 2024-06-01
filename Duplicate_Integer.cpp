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
