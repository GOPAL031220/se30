#include<iostream>
using namespace std;

class Triangle{
	private:
		float a,b,c;
		public:
		type()
		{
			cout<<"Enter length of First Side: ";
			cin>>a;
			
			cout<<"Enter length of Second Side: ";
			cin>>b;
			
			cout<<"Enter length of Third Side: ";
			cin>>c;
			
			if(a==b && b==c)
			{
				cout<<"\nThis is a Equilateral triangle: ";
			}
			else if(a==b || b==c || c==a)
			{
				cout<<"\nThis is a  Isosceles triangle: ";
			}
			else
			{
				cout<<"\nThis is a  Scalene triangle: ";
			}
			
		}
	
};

main()
{
	Triangle obj;
	obj.type();
}
