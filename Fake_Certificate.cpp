#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }

        int z1=0;
        for(int i=0;i<n;i++)
        { 
            if(s[i]=='1')
            {
                z1++;
            }
        }

        int z0;
        cin>>z0;
        cout<<(z1-z0)*9 ;
    }
}
