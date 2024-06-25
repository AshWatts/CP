#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> a;
        a.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                a.push_back(nums[i+1]);
            }
        }
        nums=a;
        return a.size();
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1,1,2};
    cout<<obj.removeDuplicates(nums);
    return 0;
}