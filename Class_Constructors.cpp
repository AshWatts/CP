#include<bits/stdc++.h>
using namespace std;

class student 
{      
  public:          
    string name; 
    int age;    

    void intro()
    {
      cout<<"Name - "<<name<<"  "<<"Age -  "<<age<<endl;
    }  

    student(string x, int y)       // Constructor always in PUBLIC!
    {
      name = x;
      age = y;
    }
};

int main() 
{
  student s1=student("a",21);
  student s2=student("b",12);

  s1.intro();
  s2.intro();

  cout << s1.name <<" "<<s1.age<<endl;
  cout << s2.name <<" "<<s2.age<<endl;
  return 0;
}