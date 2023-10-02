#include<bits/stdc++.h>
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

    float c=0;
    float d=0;
    for(int i=0;i<n;i++)
    {
        c=c+a[i];
        d=d+100;
    }
    float e;
    e=c/d;
    cout<<e*100;
} 