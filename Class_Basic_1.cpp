#include<bits/stdc++.h>
using namespace std;

class student
{                        // Private by Default!     
    public:
    int age;
    string name;
    

    void intro()
    {
        cout<<"Age - "<<age<<endl;
        cout<<"Name - "<<name<<endl<<endl;
    }
};

int main()
{
    student s1;
    cin>>s1.age;
    cin>>s1.name;

    student s2;
    cin>>s2.age;
    cin>>s2.name;
    
    s1.intro();
    s2.intro();

    return 0;
}