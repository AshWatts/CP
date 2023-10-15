#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int z=0;
    int r[t];
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }



        for(int i=0;i<n;i++)
        {
            char b='x';
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    b='y';
                }
            }
            if(b=='x')
            {
                break;
            }
        }

        if(n==1)
        {
            z=0;
            r[k]=z;
            continue;
        }
        
        int max1=a[n-1];
        int min1=a[0];
        int max2=a[n-2];
        int min2=a[1];


        int x = max1 - min1;

        int y = max2 - min2;

        int z=x+y;



        r[k]=z;
    }

    for(int i=0;i<t;i++)
    {
        cout<<r[i]<<endl;
    }
}