#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
		public:
		Date()
		{   int d=0,m=0,y=0;
			cout<<"Enter Day: ";
			cin>>d;
			
			cout<<"Enter Month: ";
			cin>>m;
			
			cout<<"Enter Year: ";
			cin>>y;
			
			this->day=d;
			this->month=m;
			this->year=y;
		}
		valid()
		{
			int r=1;
			if(day<1 || day>31) r=0;
			if(month<1 || month>12) r=0;
			if(year<1) r=0;
			
			if((month==4 || month==6 || month==9 || month==11) && day>30) r=0;
			
			if(month==2)
			{
			if((year % 400 ==0) || (year % 4 ==0 && year % 100 !=0))
			{
				if(day>29) r=0;
			}
			else
			{
				if(day>28) r=0;
			}
			}
			cout<<"\nDate: "<<day<<"-"<<month<<"-"<<year;
			
			if(r==1) cout<<"\nThis Is a valid Date";
			else cout<<"\nThis is a invalid Date";

		}		
	
};
main()
{
	Date obj;
	obj.valid();
}



