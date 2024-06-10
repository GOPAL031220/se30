#include<iostream>
using namespace std;

class Cricketer {
	public:
		string name,country;
		int age;
};

class Batsman: public Cricketer{
	public:
	int total_runs,average_runs,best_performance,innings;
	input()
	{
		cout<<"Name: ";
		cin>>name;
		
		cout<<"Age: ";
		cin>>age;
		
		cout<<"Country: ";
		cin>>country;
		
		cout<<"Enter Total Runs: ";
		cin>>total_runs;
		
		cout<<"Enter No of innings: ";
		cin>>innings;
		
		cout<<"Enter Best Performance: ";
		cin>>best_performance;
		
		
	}
	calculate()
	{
		average_runs=total_runs/innings;
		
	}
	display()
	{
		cout<<"\nName: "<<name;
		cout<<"\nAge: "<<age;
		cout<<"\nCountry: "<<country;
		cout<<"\nTotal Runs: "<<total_runs;
		cout<<"\nAverage Runs: "<<average_runs;
		cout<<"\nBest Performance: "<<best_performance;
	}
};
main()
{
	Batsman obj;
	obj.input();
	obj.calculate();
	obj.display();
}
