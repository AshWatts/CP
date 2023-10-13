#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m=0,n=0;
    string a;
    cin>>a;

    for(int i=0;i<a.length();i++)
    {
        if(int(a[i])<97)
        {
            m=m+1;
        }
        else
        {
            n=n+1;
        }
    }

    if(m>n)
    {
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        cout<<a;
    }
    else
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a;
    }
}