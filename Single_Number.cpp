#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans ^= val;
        }
        return ans;
    }
};


int main() {
    Solution solution;
    
    vector<int> test1 = {2, 2, 1};
    cout << solution.singleNumber(test1) << endl; 

    vector<int> test2 = {4, 1, 2, 1, 2};
    cout << solution.singleNumber(test2) << endl;

    return 0;
}
