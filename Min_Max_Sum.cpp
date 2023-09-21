#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool b=true;
    long a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                b=true;
            }
        }


    }
    
    //Sorted array
    
    long c=0;
    long d=0;
    for(int i=0;i<4;i++)
    {
        c=c+a[i];
    }
    
    for(int i=1;i<5;i++)
    {
        d=d+a[i];
    }
    
    cout<<c<<" "<<d;
}