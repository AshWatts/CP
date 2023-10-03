#include<iostream>
using namespace std;

class class_name
{
    private:
    int x;

    public:
    class_name()
    {
        x=0;
    }

    friend int friend_name(class_name);
};

friend_name(class_name a)
{
    a.x=10;
    return a.x;
}

int main()
{
    cout<<"Friend Function : ";
    class_name c;
    cout<<friend_name(c);
    return 0;
}