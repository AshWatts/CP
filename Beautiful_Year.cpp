#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    while(true)
    {
        a=a+1;
        int b=a/1000;
        int c=a/100%10;
        int d=a/10%10;
        int e=a%10;

        if(b!=c and b!=d and b!=e and c!=d and c!=e and d!=e)
        {
            break;
        }
    }
    cout<<a<<endl;
    return 0;
}