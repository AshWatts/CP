#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int w[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }

        sort(w,w+n);

        for(int i=0;i<n;i++)
        {
            cout<<w[i]<<"  ";
        }
        
        int z;
        z=w[n-1];
        for(int j=1;j<n;j++)
        {
            
        }

        cout<<endl;
    }
}
