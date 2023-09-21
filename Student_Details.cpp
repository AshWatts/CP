//============================================================================
// Name        : Assignment_2.cpp
// Author      : Ayush W
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
#include<sstream>
class student
{
	string name;
	string address, Class,dob,blood_group;
	int div,roll_no;
	long tele_no;
	public:

	student()//default constructor
	{
		cout<<"Student not found";
	}

	student(string name,string Class, string dob, string blood_group,string address, int div,int roll_no,long tele_no)
	{
		this->name=name;
		this->address=address;
		this->blood_group=blood_group;
		this->Class=Class;
		this->roll_no=roll_no;
		this->tele_no=tele_no;
		this->div=div;
		this->dob=dob;
	}

	student(student &s)//copy constructor
	{
		cout<<"This is copy constructor"<<endl;
	}

	void display()
	{
		cout<<"------------------------------------------------------------------"<<endl;
		cout<<"Name:"<<name<<endl<<"Class: "<<Class<<endl<<"Date of Birth: "<<dob<<endl;
		cout<<"Blood group: "<<blood_group<<endl<<"Telephone number: "<<tele_no;
		cout<<endl<<"Division:"<<div<<endl;
		cout<<"Address: "<<address<<endl<<"Roll no: "<<roll_no<<endl;
		cout<<"------------------------------------------------------------------"<<endl;
	}

	friend class f;//declaration of friend class
	~student();
};

student::~student()
{
	cout<<"Class destroyed "<<endl;
}

class f
{
	public:
	void display(student & t)
	{
		cout<<"Private member of student class is obtained via friend class: "<<t.name<<endl;
	}
};

int main()
{
	static int n,t,d,r;					//declaration of static variables
	string name,Class,dob,bg,ad;

	cout<<"Enter the number of students : ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Class : ";
		cin>>Class;
		cout<<"Enter Date of Birth : ";
		cin>>dob;
		cout<<"Enter Blood Group : ";
		cin>>bg;
		cout<<"Enter Address : ";
		cin>>ad;
		cout<<"Enter Roll Number : ";
		cin>>r;
		cout<<"Enter Division : ";
		cin>>d;
		cout<<"Enter Telephone Number : ";
		cin>>t;
		student s(name,Class,dob,bg,ad,r,d,t);
		student s1(s);
		student *p;						//declaration of pointer
		p=&s;
		p->display();					//pointer to access the function
		cout<<endl;
		f s2;
		s2.display(s);
	}

	return 0;
}