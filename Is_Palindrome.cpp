#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int x = s.size();
        vector<char> st;

        for(int i=0;i<x;i++)
        {
            if(isalnum(s[i]))
            {
                st.push_back(s[i]);
            }
        }

        int y = st.size();

        for(int i=0;i<y;i++)
        {
            st[i]=tolower(st[i]);
        }

        for(int j=0;j<y/2;j++)
        {
            if(st[j]!=st[y-j-1])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution ss;
    string s = "hello there general kenobi";
    cout<<ss.isPalindrome(s);
    return 0;
}