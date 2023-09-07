#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int y;
    int q;
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
