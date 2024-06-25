#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                count++;;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
            count++;
        }
        return count<=1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3,4,5,1,2};
    cout<<obj.check(nums);
    return 0;
}