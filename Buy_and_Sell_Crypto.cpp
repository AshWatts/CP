#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int M=0;
//         for(int i=0;i<prices.size();i++)
//         {
//             for(int j=i+1;j<prices.size();j++)
//             {
//                 int m=prices[j]-prices[i];
//                 M=max(M,m);
//             }
//         }
//         return M;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else if(prices[i]-buy>profit){
                profit=prices[i]-buy;
            }
        }
        return profit;
    }
};

int main()
{
    Solution ss;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<ss.maxProfit(prices);
    return 0;
}