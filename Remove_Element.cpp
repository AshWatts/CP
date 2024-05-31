#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,val;
    cout<<"Enter Number of Elements in Array : ";
    cin>>n;
    int l[n];
    cout<<"Enter Elements of Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
    }
    cout<<"Enter Value to Remove : ";
    cin>>val;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(l[i]!=val)
        {
            l[index]=l[i];
            index++;
        }
    }
    cout<<"New Length of Array : "<<index;
    cout<<"\nNew Array : ";
    for(int i=0;i<index;i++)
    {
        cout<<l[i]<<" ";
    }
}