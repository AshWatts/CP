#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0;
        int b=nums.size()-1;

        while(a<=b)
        {
            int m = a + ((b-a)/2);
            if(nums[m]>target)
            {
                b=m-1;
            }
            else if(nums[m]<target)
            {
                a=m+1;
            }
            else
            {
                return m;
            }
        }

        return -1;
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    cout<<ss.search(nums, target);
    return 0;
}