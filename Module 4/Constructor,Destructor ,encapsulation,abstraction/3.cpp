#include<iostream>
using namespace std;

class Car{
	private:
		string company,model;
		int year;
		public:
			get()
			{
				string a,b;
				int c;
				
				cout<<"Enter Car Company: ";
				cin>>a;
				
				cout<<"Enter Car Model: ";
				cin>>b;
				
				cout<<"Enter Car Manufacturing Year: ";
				cin>>c;
				
				this->company=a;
				this->model=b;
				this->year=c;
				
			}
			
			set()
			{
				cout<<"\nCompany: "<<this->company;
				cout<<"\nModel: "<<this->model;
				cout<<"\nYear: "<<this->year;

			}
		
	
};

main()
{
	Car obj;
	obj.get();
	obj.set();
}
