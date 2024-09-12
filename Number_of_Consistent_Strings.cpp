#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0};
        for (char c : allowed) {
            arr[c - 'a'] = 1;
        }
        
        int count = 0;
        for (string word : words) {
            int flag = 1;
            for (char c : word) {
                if (arr[c - 'a'] == 0) {
                    flag = 0;
                    break;
                }
            }
            count += flag;
        }
        return count;
    }
};
int main() {
    Solution solution;
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    cout << "Allowed characters: " << allowed << endl;
    cout << "Words: ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;
    int result = solution.countConsistentStrings(allowed, words);
    cout << "Number of consistent strings: " << result << endl;
    return 0;
}