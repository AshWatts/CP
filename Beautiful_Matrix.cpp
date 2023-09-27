#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }

    int s1=0;
    int s2=0;
    int s3=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                s1=abs(2-i);
                s2=abs(2-j);
                s3=s1+s2;
            }
        }
    }

    cout<<s3;
}