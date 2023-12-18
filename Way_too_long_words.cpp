#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(s.length()<=10)
        {
            cout<<s<<endl;
        }

        else
        {
            int m=s.length();
            cout<<s[0];
            cout<<m-2;
            cout<<s[m-1];
            cout<<endl;
        }
    }
}