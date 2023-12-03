#include<bits/stdc++.h>
using namespace std;

int check(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            cout<<"Hi";
            return 0;
        }
    }
}   

int main()
{
    int n,m;
    int count=0;
    cin>>n;

    while(n>0)
    {
        m=n%10;

        if(check(m)==0)
        {
            count++;
        }

        n=n/10;
    }

    if(check(n)!=0)
    {
        if(count==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    
    else
    {
        cout<<"YES";
    }

}