#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    stringstream ss(x);
    char ch;
    int a[x.length()];
    for(int i=0;i<x.length();i++)
    {
        ss>>a[i]>>ch;
    }
    for(int i=0;i<x.length();i++)
    {
        if(a[i]==0)
        {
            break;      
        }
        cout<<a[i]<<endl;
    }

    
}