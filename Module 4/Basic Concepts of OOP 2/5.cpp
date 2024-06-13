#include<iostream>
using namespace std;

class Rectangle{
	private:
		float l,w;
		public:
		area()
		{
			cout<<"Enter the length of Rectangle: ";    //input
			cin>>l;
			
			cout<<"Enter the width of Rectangle: ";      //input
			cin>>w;
			
			cout<<"\nArea of Rectangle is: "<<l*w<<endl;    //result
			cout<<"Perimeter of Rectangle is: "<<2*(l+w);
		}	
};

main()
{
	Rectangle obj;
	obj.area();
}
