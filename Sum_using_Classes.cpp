#include<bits/stdc++.h>
using namespace std;

class sum
{
    private:
    int a,b;
    
    public:
    void get_data()
    {
        cout<<"Enter the 2 Numbers : ";
        cin>>a>>b;
    } 
    void addition()
    {
        cout<<"Sum is : "<<a+b;
    }
};

int main()
{
    sum s;
    s.get_data();
    s.addition();
}