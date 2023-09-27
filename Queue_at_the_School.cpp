#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    cin>>t;

    string s;
    cin>>s;


    char b;

    for(int i=1;i<=t;i++)
    {
        if(s[i]=='G')
        {
            b=s[i-1];
            s[i-1]=s[i];
            s[i]=b;
        }
    }

    cout<<s;
}