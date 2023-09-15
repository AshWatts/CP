#include<iostream>
using namespace std;

class Complex
{
public:
	int real;
	int img;
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex operator+(Complex&b)
	{
		Complex temp;
		temp.real = real + b.real;
		temp.img = img + b.img;
		return temp;
	}

	Complex operator-(Complex&b)
	{
		Complex temp;
		temp.real = real - b.real;
		temp.img = img - b.img;
		return temp;
	}

	Complex operator*(Complex&b)
	{
			Complex temp;
			temp.real = real * b.real - img * b.img;
			temp.img = img * b.real + real * b.img;
			return temp;
	}
};

void operator<<(ostream&out,Complex&b)
{
	out << b.real;
	if (b.img >= 0)
	{
		out << "+" << b.img << "i";
	}
	else
	{
		out << b.img << "i";
	}
}
void operator>>(istream&in,Complex&b)
{
	in >> b.real;
	in >> b.img;
}

int main() 
{
	string x;
	Complex c1,c2,c3;
	cout << "Enter space separated real and imaginary values of first complex number: ";
	cin >> c1;
    cout << c1;
	cout << "\nEnter space separated real and imaginary values of second complex number: ";
	cin >> c2;
    cout << c2;
	cout << "\nOperation (+,-,*): ";
	cin >> x;
	if (x == "+")
	{
	c3 = c1 + c2;
	cout << c1;
	cout << " + ";
	cout << c2;
	cout << " = ";
	cout << c3;
	}

	else if (x == "-")
	{
	c3 = c1 - c2;
	cout << c1;
	cout << " - ";
	cout << c2;
	cout << " = ";
	cout << c3;
	}

	else if(x == "*")
	{
	c3 = c1 * c2;
	cout << c1;
	cout << " * ";
	cout << c2;
	cout << " = ";
	cout << c3;
	}

    else
    {
        cout<<"Enter a Valid Operator.";
    }
	return 0;
}