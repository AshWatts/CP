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
    
    int d=0;
    int e=0;
    int f=0;

    for(int i=0;i<n;i++)
    {
        int c=0;
            
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }

        if(c%2==1)
        {
            e++;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
            else
            {
                d++;
            }
        }
    }

    if(d!=0)
    {
        f++;
    }

    

    cout<<e<<" "<<f;
}