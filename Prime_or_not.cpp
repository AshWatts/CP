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
        for(int i=1;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                b++;
            }

            if(a/i!=i)
            {
                b++;
            }
        }
        if(b==2)
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