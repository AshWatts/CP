#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:

    Student(int a, string b, int c, string d)
    {
        cout<<"Student Database : "<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }

    ~Student()
    {
        cout<<"Object is Destroyed."<<endl;
    }
};

int main()
{
    int a,c,n;
    string b,d;

    cout<<"No. of Students : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Roll_No. : ";
        cin>>a;
        cout<<"Name : ";
        cin>>b;
        cout<<"Age : ";
        cin>>c;
        cout<<"Branch : ";
        cin>>d;

        Student(a,b,c,d);
    }
}