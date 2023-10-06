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

    int m;
    cin>>m;

    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x+a[i];
    }

    x=x-a[k];

    int y=x/2;

    if(y==m)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<m-y;
    }
}