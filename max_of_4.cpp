#include<iostream>
using namespace std;
void find_greatest(int a,int b,int c,int d)
{
    int x=max(a,max(b,max(c,d)));
    if(x==a)
    {
        cout<<a;
    }
    else if(x==b)
    {
        cout<<b;
    }
    else if(x==c)
    {
        cout<<c;
    }
    else
    {
        cout<<d;
    }
}
int main()
{
    int a,b,c,d;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;
    cout << "\n";  
    find_greatest(a, b, c, d);  
}