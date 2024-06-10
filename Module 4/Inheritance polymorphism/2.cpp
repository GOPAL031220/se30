#include<iostream>
using namespace std;

class Rectangle{
	public:
		float l,w;
		inpute()
		{   
		    cout<<"Enter length of Rectangle: ";
			cin>>l;
			cout<<"Enter width of Rectangle: ";
			cin>>w;	
		}
};

class Area: public Rectangle{
	public:
		display()
		{
			cout<<"\nArea of Rectangle is: "<<l*w;
		}
};

main()
{
	Area obj;
	obj.inpute();
	obj.display();
}
