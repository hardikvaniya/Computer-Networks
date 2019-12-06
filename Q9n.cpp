#include<iostream>
#include<stdio.h>

using namespace std;

class Date
{
	int day,mon,year,temp;
	public:
		Date(int d,int m,int y)
		{
			day=d;
			mon=m;
			year=y;
		}
		void add()
		{
			int num;
			int monthdays[] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
			int addyears;    //number of years to add
        	int leftoverdays; //days leftover after dividing by 365
        	cout<<"Enter number to add: ";
			cin>>num;
           	addyears = num/365;
	        leftoverdays = num%365;
        	year += addyears;
			for (int i = 0; i < leftoverdays; i++)
			{
                if (day < monthdays [mon -1])
                        day ++;
                else if ((day == monthdays [mon-1]) && (mon < 12))
                {
                        day = 1;
                        mon ++;
                }
                else if ((day == monthdays [mon-1]) && (mon == 12))
                {
                        day = 1;
                        mon = 1;
                        year ++;
                }
                
		
			}
			
			display();
		}
		void sub()
		{
		
		int num;
			int monthdays[] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
			int subyears;    //number of years to add
        	int leftoverdays; //days leftover after dividing by 365
        	cout<<"Enter number to add: ";
			cin>>num;
           	subyears = num/365;
	        leftoverdays = num%365;
        	year = year - subyears;
			for (int i = 0; i < leftoverdays; i++)
			{
                if (day > 1)
                        day --;
                else if ((day == 1) && (mon >1))
                {
                        day = monthdays[mon-2];
                        mon --;
                }
                else if ((day == 1) && (mon == 1))
                {
                        day = 31;
                        mon = 12;
                        year --;
                }
                
		
			}
			
			display();
		}
		void display()
		{
			cout<<"\nDate is: "<<day<<" \ "<<mon<<" \ "<<year;
		}
		
		
		
};

int main()
{
	int choice;
	Date d(21,12,1998);
	Date d2(1,1,1998);
	cout<<"\nPress 1 to add to a date";
	cout<<"\nPress 2 to substract from a date: ";
	cout<<"\nPress 3 to find difference between dates: ";
	cout<<"\nPress 4 to exit";
	cin>>choice;
	d.add();
	d2.sub();
	return 0;
	
}
		
