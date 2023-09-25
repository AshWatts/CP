#include<bits/stdc++.h>
using namespace std;

class student
{                        // Private by Default!     
    public:
    int age;
    string name;
};

int main()
{
    student s1;
    cin>>s1.age;
    cout<<"First Age : "<<s1.age<<endl;

    student s2;
    cin>>s2.name;
    cout<<"Second Name : "<<s2.name;

    return 0;
}