#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int differing_bits = start ^ goal;
        int count = 0;
        
        while (differing_bits) {
            count += differing_bits & 1;
            differing_bits >>= 1;
        }
        
        return count;
    }
};
int main() {
    Solution solution;
    int start = 10; // Example start value
    int goal = 20;  // Example goal value
    int result = solution.minBitFlips(start, goal);
    cout << "Minimum bit flips: " << result << std::endl;
    return 0;
}