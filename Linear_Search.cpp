#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    int a[n];
    cout<<"Enter Number of Elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Element : ";
        cin>>a[i];
    }
    cout<<"Enter Element to be searched : ";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Element is at Position "<<i;
        }
    }
}
