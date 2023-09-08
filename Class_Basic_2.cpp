#include<bits/stdc++.h>
using namespace std;

class MyClass
{
    public:
        int myfunc1(int a)
        {
            cout<<"1"<<" "<<a<<endl;
        }

        int myfunc2(int b);
};

int MyClass::myfunc2(int b)
{
    cout<<"2"<<" "<<b<<endl;
}

int main()
{
    MyClass MyObj;
    MyObj.myfunc1(55);
    MyObj.myfunc2(66);
    return 0;
}