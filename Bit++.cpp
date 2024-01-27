#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int x=0;
    char a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a=='+' || c=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;
}