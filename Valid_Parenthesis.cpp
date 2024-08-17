#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> e;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{'  || s[i]=='[')
            {
                e.push(s[i]);
            }
            else if(s[i]==')' && !e.empty() && e.top()=='(')
            {
                e.pop();
            }
            else if(s[i]=='}' && !e.empty() && e.top()=='{')
            {
                e.pop();
            }
            else if(s[i]==']' && !e.empty() && e.top()=='[')
            {
                e.pop();
            }
            else
            {
                return false;
            }
        }
        return e.empty();
    }
};

int main()
{
    Solution ss;
    string s = "({{}[[((()))]]})";
    cout<<ss.isValid(s);
    return 0;
}