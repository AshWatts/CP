#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin>>a;

    string b;
    b=to_string(a);

    int count=0;
    int c1=0,c2=0;

    for(int i=0;i<b.length();i++)
    {
        if(b[i]=='4' or b[i]=='7')
        {
            count++;
        }
    }

    if(count == 0)
    {
        cout<<"NO";
    }

    if(count == 4 or count == 7)
    {
        cout<<"YES";
    }
}