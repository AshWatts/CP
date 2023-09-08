#include <iostream>
using namespace std;

class Complex
{
int real, imag;
public:
    Complex(int r = 0, int i =0)
    {
        real = r; imag = i; 
    }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);

    Complex operator + (Complex const&bb)
    {
    Complex dd;
    dd.real=real+bb.real;
    dd.imag=imag+bb.imag;
    return dd;
    }
    Complex operator - (Complex const&bb)
        {
        Complex cc;
        cc.real=real-bb.real;
        cc.imag=imag-bb.imag;
        return cc;
        }
    Complex operator * (Complex const&bb)
        {
            Complex cc;
            cc.real=(real*bb.real)-(imag*bb.imag);
            cc.imag=(real*bb.imag)+(bb.real*imag);
            return cc;
        }

};

ostream & operator << (ostream &out, const Complex &c)
{
out << c.real;
out << "+i" << c.imag << endl;
return out;
}

istream & operator >> (istream &in, Complex &c)
{
cout << "Enter Real Part ";
in >> c.real;
cout << "Enter Imaginary Part ";
in >> c.imag;
return in;
}


int main()
{
Complex aa,bb,cc,dd;
cin>>aa;
cout<<"First Number : ";
cout<<aa;
cin>>bb;
cout<<"Second Number : ";
cout<<bb;
cout<<"Sum : ";
dd=aa+bb;
cout<<dd;
cc=aa-bb;
cout<<"Difference : ";
cout<<cc;
cout<<"Product : ";
cc=aa*bb;
cout<<cc;
return 0;
}