#include<bits/stdc++.h>
using namespace std;

// int Print()
// {
//     int n;
//     int p[n];
//     int* a=p;
//     for(int i=0;i<n;i++)
//     {
//         cout<<p[i]<<" ";
//     }
// }


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
    cout<< p;
}