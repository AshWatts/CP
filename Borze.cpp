#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string b="";
    int a;
    a=s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='.')
        {
            b.append("0");
        }

        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                b.append("1");
                i=i+1;
            }
            else if(s[i+1]=='-')
            {
                b.append("2");
                i=i+1;
            }
        }
    }

    cout<<b;

}