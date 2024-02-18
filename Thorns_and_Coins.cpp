#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }   

        for(int i=0;i<n;i++)
        {
            if(a[i]=='@')
            {
                count++;
            }
            else if(a[i]=='*')
            {
                if(a[i-1]=='*')
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
        cout<<count<<endl;
    }
}