#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        int n=s.size();

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s!=t)
        {
            return false;
        }

        return true;
    }
};

int main()
{
    Solution s;
    string s1 = "anagram";
    string s2 = "nagaram";
    cout << s.isAnagram(s1, s2) << endl;
    return 0;
}