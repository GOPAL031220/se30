#include<iostream>
using namespace std;

class Person{
	private:
		
		string n,c;
		int a;
		public:
		Bio()
		{
			cout<<"Enter Your Name: ";
			cin>>n;
			
			cout<<"Enter Your Age: ";
			cin>>a;
			
			cout<<"Enter Your Country: ";
			cin>>c;
			
			cout<<"\n\nName: "<<n<<endl;
			cout<<"Age: "<<a<<endl;
			cout<<"Country: "<<c;
		
		}
	
};

main()
{
	Person obj;
	obj.Bio();
}
