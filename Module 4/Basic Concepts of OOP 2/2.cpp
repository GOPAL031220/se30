#include<iostream>
using namespace std;

class Bank
{
	public:
		string name="h",type;
		double account_number, balance;
		
		info() //new account register ke liye function
		{
			cout<<"\nEnter Your Name: ";
			cin>>name;
			
			cout<<"Enter Your Account Number: ";
			cin>>account_number;
			
			cout<<"What is Your Account Type: ";
			cin>>type;
			
			cout<<"Enter Your First Deposite Amount: ";
			cin>>balance;
			
			cout<<""<<endl;
		}
		depo()   //account me pese deposite ke liye
		{
			double a;
			cout<<"\nEnter Your Deposite Amount: ";
			cin>>a;
			
			balance=balance+a;
			
			cout<<"Your Updated Account Balance Is: "<<balance;
			cout<<""<<endl<<endl;
		}
		with()   //account se pese withdrawal ke liye
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
		display()    //bank account ki total detail display ke liye 
		{
			if(name=="h")
			{
				cout<<"Please open a Bank Account First: ";
			}
			else
			{
			cout<<"Name: "<<name;
			cout<<"\nYour Updated Account Balance Is: "<<balance;
		    }
			cout<<""<<endl<<endl;
		}
};

main()
{
	Bank obj;
	
	for(int i=0;i<=9999;i++)      //for loop Bank ki menu ke liye
	{
		int choice,end=0;
	
	cout<<"Press 1 for New Account Open\nPress 2 for Deposite\nPress 3 for withdraw\nPress 4 for display Account Deatails\nPress 5 to Exit \n\nEnter Your Choice(1-5): ";
	cin>>choice;
	
	switch (choice)      //switch case choice ke hisab se function call karne ke liye
	{
	case 1:
		obj.info();
		break;
	
	case 2:
		obj.depo();
		break;
	
	case 3:
		obj.with();
		break;
	
	case 4:
		obj.display();
		break;
		
	case 5:
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

