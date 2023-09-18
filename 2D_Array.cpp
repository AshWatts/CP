#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int b=0;
    for(int i=0;i<n;i++)
    {
        b=b+a[i][i];
    }


    
    int c=0;
    for(int i=0;i<n;i++)
    {
        c=c+a[i][n-i-1];
    }


    int x;
    x=abs(b-c);
    cout<<x;


}

