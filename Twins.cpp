#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    if(n==1)
    {
        cout<<1;
        return 0;
    }

    if(n==2)
    {
        if(a[0]==a[1])
        {
            cout<<2;
        }
        else
        {
            cout<<1;
        }
        return 0;
    }

    int max1=0;
    int max2=a[n-1];

    for(int i=0;i<n-1;i++)
    {
        max1+=a[i];
    }

    if(max2>max1)
    {
        cout<<1;
    }
    else
    {
        for(int i=n-2;i>=0;i--)
        {
            max1-=a[i];
            max2+=a[i];
            if(max2>max1)
            {
                cout<<n-i<<" ";
                break;
            }
        }
    }
}