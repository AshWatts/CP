#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    int count=0;

    if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3])
    {
        count++;
    }
    if(a[1]==a[2] || a[1]==a[3])
    {
        count++;
    }
    if(a[2]==a[3])
    {
        count++;
    }
    cout<<count;
}