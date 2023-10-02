#include<bits/stdc++.h>
using namespace std;

class Prime
{
    private:
    int a;

    public:
    void get_data()
    {
        cout<<"Enter a Number : ";
        cin>>a;
    }
    void check()
    {
        int b=0;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                b=1;
            }
        }
        if(b==0)
        {
            cout<<"Prime";
        }
        else
        {
            cout<<"Composite";
        }
    }
};


int main()
{
    Prime p;
    p.get_data();
    p.check();
    return 0;
}