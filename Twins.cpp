#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int sum1=0;
    int sum2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sum1=a[n-1];
    for(int i=0;i<n-1;i++)
    {
        sum2+=a[i];
    }

    if(sum1>sum2)
    {
        cout<<1;
    }
    else
    {
        for(int i=n-2;i>=0;i--)
        {
            sum1+=a[i];
            sum2-=a[i];
        }
    }
}
