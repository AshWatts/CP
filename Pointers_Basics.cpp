#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int* p=a;
    cout<<a<<endl;                      // Same as cout<<&a<<endl;
    cout<<p<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}