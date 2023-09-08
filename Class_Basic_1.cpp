#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
        int age;
        string name;
};

int main()
{
    myclass myobj1;
    cout<<"Enter 1st Age : ";
    cin>>myobj1.age;
    cout<<"Enter 1st Name : ";
    cin>>myobj1.name;


    myclass myobj2;
    cout<<"Enter 2nd Age : ";
    cin>>myobj2.age;
    cout<<"Enter 2nd Name : ";
    cin>>myobj2.name;

    cout<<"Age : "<<myobj1.age<<" "<<myobj2.age<<endl;
    cout<<"Name : "<<myobj1.name<<" "<<myobj2.name<<endl;

    return 0;
}