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
        
        int c1=0;
        int c2=0;      

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c1++;
            }
            else if(s[i]=='1')
            {
                c2++;
            }
        }
        
        cout<<c1-c2<<endl;
    }
}
