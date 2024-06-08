#include<iostream>
using namespace std;

class Circle{
	private:
		float r,a=3.141592;
		public:
		area()
		{
			cout<<"Enter the Radius of Circle: ";
			cin>>r;
			
			cout<<"\nArea of Circle is: "<<a*r*r<<endl;
			cout<<"Circumference of Circle is: "<<2*a*r;
		
		}
	
};

main()
{
	Circle obj;
	obj.area();
}
