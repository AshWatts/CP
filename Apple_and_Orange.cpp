#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    int c1=0;
    int c2=0;
    int apples[m];
    int oranges[n];
    
    cin>>s>>t>>a>>b>>m>>n;
    for(int i=0;i<m;i++)
    {
        cin>>apples[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>oranges[i];
    }
    
    for(int i=0;i<m;i++)
    {
        if(a+apples[i]>=s and a+apples[i]<=t)
        {
            c1=c1+1;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(b+oranges[i]<=t and b+oranges[i]>=s)
        {
            c2=c2+1;
        }
    }
    
    cout<<c1<<endl<<c2;
}