#include<bits/stdc++.h>
using namespace std;

long sum(long a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum is "<<sum;
}

int main()
{
    int n;
    cin>>n;
    long a[n];
    sum(a,n);
    return 0;
}