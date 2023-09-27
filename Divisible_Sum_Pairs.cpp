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

        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                c=c+1;
            }
        }
    }
    
    cout<<c;
}
