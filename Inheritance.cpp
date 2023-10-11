#include<bits/stdc++.h>
using namespace std;

class base
{
    int a;
    public:
    void displayA()
    {
        cout<<"Base Class"<<endl;
    } 
};

class child : public base
{
    int A;
    public:
    void displayb()
    {
        cout<<"Derived Class"<<endl;
    }
};

int main()
{
    base b;
    child d;

    b.displayA();
    d.displayb();
    d.displayA();
}