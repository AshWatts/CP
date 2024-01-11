#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    int b[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]==0)
        {
            count1++;
        }
    }
    int x,y;
    x=min(count1,count2);
    y=min(count3,count4);
    cout<<min(x,y);
}