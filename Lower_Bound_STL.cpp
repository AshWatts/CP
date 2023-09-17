// Search for an element, and see its index or possible index.

#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;
    int m;
    for(int i=0;i<k;i++)
    {
        cin>>m;
        vector <int> v(a,a+n);  
        vector <int> :: iterator lower;
        lower = lower_bound(v.begin(),v.end(),m);
        int z=0;
        for(int i=0;i<n;i++)
        {
            if(m==a[i])
            {
                z=1;
            }
        }

        if (z==1)
        {
            cout<<"Yes "<<(lower-v.begin()+1)<<endl;
        }
        else
        {
            cout<<"No "<<(lower-v.begin()+1)<<endl;
        }
        
    }

    return 0;
}