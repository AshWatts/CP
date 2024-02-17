#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int m=2*n;
        int a[m];
        int sum=0;

        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }

        cout<<sum;
    }
}
