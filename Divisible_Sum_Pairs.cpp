#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int d=0;d<100;d++)
            {
            if(a[i]+a[j]==d*k)
            {
                c=c+1;
            }
            }
        }
    }
    
    cout<<c;
}
