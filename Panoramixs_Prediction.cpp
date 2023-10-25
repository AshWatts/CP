#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int count=0;
    int c=0;
    int k=0;
    cin>>n;
    cin>>m;

    for(int i=2;i<m/2;i++)
    {
        if(m%i==0)
        {
            cout<<"NO";
            count=count+1;
            break;
        }
    }

    int f=n;

    if(count==0)
    {
        cout<<"YES";
    }

}