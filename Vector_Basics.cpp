#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cout<<"Enter Number of Integers : ";
    cin>>n;
    vector <long long> v(n);
    cout<<"Enter the integers : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}