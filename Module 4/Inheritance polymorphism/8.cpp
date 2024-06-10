#include<iostream>
using namespace std;

class Cal{
	public:
		Add()
		{ int a,b;
			cout<<"\n\nAddition: "<<a+b;
		}
		Add(int a, int b)
		{
			cout<<"\nSubstraction: "<<a-b;
		}
		Add(int a, int b, int c)
		{
			cout<<"\nMultiplication: "<<a*b;
		}
		Add(int a, int b, int c,int d)
		{
			cout<<"\nDivision: "<<a/b;
		}	
};
main()
{
	int n1,n2;
	cout<<"Enter First Number: ";
	cin>>n1;
	cout<<"Enter Second Number: ";
	cin>>n2;
	
	Cal obj;
	obj.Add();
	obj.Add(n1,n2);
	obj.Add(n1,n2,1);
	obj.Add(n1,n2,1,2);
}
