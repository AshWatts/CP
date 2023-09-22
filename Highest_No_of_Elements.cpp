#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int m;
    m=c[0];
    for(int i=0;i<n;i++)
    {
        if(m<c[i])
        {
            m=c[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(m==c[i])
        {
            count=count+1;
        }
    }
    cout<<count;
}