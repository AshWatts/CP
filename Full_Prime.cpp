#include<bits/stdc++.h>
using namespace std;

int check(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    if(check(n)==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }

    while(n>0)
    {
        
    }

}

