#include<iostream>
using namespace std;

class A
{
	public:
		string name;
		info()
		{
			cout<<"Enter Your Name: ";
			cin>>name;
		}
	
};

class B
{
	public:
		int roll;
		info1()
		{
			cout<<"Enter Your Roll No: ";
			cin>>roll; 
			
		}
	
};

class C: public A, public B
{
	public:
		int h,e,g;
		info2()
		{
			
			cout<<"Enter Your marks  in Hindi: ";
			cin>>h;
			
			cout<<"Enter Your Marks in English: ";
			cin>>e;
			
			cout<<"Enter Your Marks in Gujrati: ";
			cin>>g;
			
			cout<<"\n\nStudents Mark Sheet:\nName: "<<name;
			cout<<"\nRoll Number: "<<roll;
			cout<<"\nHindi: "<<h;
			cout<<"\nEnglish: "<<e;
		    cout<<"\nGujrati: "<<g;

			int total=h+e+g;
			cout<<"\nTotal Marks: "<<total;
			
			int avg=total/3;
			cout<<"\nAverage Marks: "<<avg;
		}
	
};

main()
{
	C obj;
	obj.info();
	obj.info1();
	obj.info2();
}

