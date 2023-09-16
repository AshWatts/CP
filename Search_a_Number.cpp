//Input is a Set of n numbers. We give input and check if number is present and if yes/no, what is its index.



#include <bits/stdc++.h>
using namespace std;


int main() 
{
    long long n;
    cin>>n;
    vector <long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long y;
    long long q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        for(int i=0;i<n;i++)
        {
            if(y==v[i])
            {
                cout<<"Yes "<<i+1<<endl;
                break;
            }
            else if(y<v[i])
            {
                cout<<"No "<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
