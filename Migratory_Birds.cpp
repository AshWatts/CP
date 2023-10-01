#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==1)
        {
            a=a+1;
        }
        else if(x[i]==2)
        {
            b=b+1;
        }
        else if(x[i]==3)
        {
            c=c+1;
        }
        else if(x[i]==4)
        {
            d=d+1;
        }
        else if(x[i]==5)
        {
            e=e+1;
        }
    }

    if(a>b and a>c and a>d and a>e)
    {
        cout<<1;
    }

    else if(b>a and b>c and b>d and b>e)
    {
        cout<<2;
    }

    else if(c>a and c>b and c>d and c>e)
    {
        cout<<3;
    }

    else if(d>a and d>b and d>c and d>e)
    {
        cout<<4;
    }

    else if(e>a and e>b and e>c and e>d)
    {
        cout<<5;
    }
}