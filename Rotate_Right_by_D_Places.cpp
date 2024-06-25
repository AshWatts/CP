#include<bits/stdc++.h>
using namespace std;


// BRUTE FORCE APPROACH
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k=k%n;
//         if(k==0){
//             return;
//         }
//         int temp = nums[n-1];
//         for(int i=n-1;i>=1;i--){
//             nums[i]=nums[i-1];
//         }
//         nums[0]=temp;
//         rotate(nums,k-1);
//     }
// };

// Better Solution
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k%nums.size();
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
//     }
// };

int main(){
    Solution obj;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    obj.rotate(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}