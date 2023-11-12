#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    string c="";
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
        {
            c=c+'0';
        }
        else
        {
            c=c+'1';
        }
    }
    cout<<c;
}