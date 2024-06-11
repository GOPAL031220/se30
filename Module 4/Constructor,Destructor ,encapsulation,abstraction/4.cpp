#include<iostream>
using namespace std;

class Bank
{
	public:
		double account_number, balance=5000;
		
		info()
		{
			cout<<"Enter Your Account Number: ";
			cin>>account_number;	
			cout<<""<<endl;
		}
		depo()
		{
			double a;
			cout<<"\nEnter Your Deposite Amount: ";
			cin>>a;
			
			balance=balance+a;
			
			cout<<"Your Updated Account Balance Is: "<<balance;
			cout<<""<<endl<<endl;
		}
		with()
		{
			double b;
			
			cout<<"\nYour Account Balance Is: "<<balance;
			
			cout<<"\nEnter Your Withdraw Amount: ";
			cin>>b;
			if(balance<b)
			{
				cout<<"You are not Allowed to withdraw more than your Account Balance: ";
			}
			else
			{
			balance=balance-b;
			
			cout<<"Your Remaining Account Balance Is: "<<balance;
		    }
			cout<<""<<endl<<endl;
		}
};

main()
{
	Bank obj;
	obj.info();
	
	for(int i=0;i<=9999;i++)
	{
		int choice,end=0;
	
	cout<<"Press 1 for Deposite\nPress 2 for withdraw\nPress 3 to Exit \n\nEnter Your Choice(1-3): ";
	cin>>choice;
	
	switch (choice)
	{
	case 1:
		obj.depo();
		break;
	
	case 2:
		obj.with();
		break;
	
	case 3:
		end=1;
		break;
			
	default:
	{
		cout<<"Your Choice Is Invalid."<<endl<<endl;
		break;
	}
    }
    
    if(end==1)
    {
    	cout<<"Thanks For Using Our Banking System.";
    	break;
	}
    }
}

