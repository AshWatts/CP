#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int k=100;
    cin>>n;
    cin>>m;
    int count=0;

    for(int i=2;i<m/2;i++)
    {
        if(m%i==0)
        {
            cout<<"NO";
            count=count+1;
            break;
        }
    }


    if(count==0)
    {
        cout<<"YES";
        for(int i=n;i<k;i++)
        {
            for(int j=2;j<n;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
        }
    }
    cout<<"HI";
}