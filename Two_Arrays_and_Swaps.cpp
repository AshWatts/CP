#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        for(int i=0;i<k;i++)
        {
            if(a[i]<b[n-i-1])
            {
                a[i]=b[n-i-1];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }

        cout<<sum<<endl;
    }
}