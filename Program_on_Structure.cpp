#include<iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
}D;

void get_data()
{
	cout<<"Enter\ndate: ";
	cin>>D.day;
	cout<<"month: ";
	cin>>D.month;
	cout<<"year: ";
	cin>>D.year;
}
int validate()
{
	const int monthly_table[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(D.year>0)
	{
	if(D.month>=1 && D.month<=12)
		{
            if(D.day>=1 && D.day<=monthly_table[D.month-1])
                return 1;
            if(D.day==29 && D.month==2 && (D.year%400==0 ||(D.year%4==0 && D.year%100!=0)))
                return 1;
		}
	}
	return 0;
}	 	  	 	   	      	    	  	 	
void display(int r)
{
	string months[]={"January","Febraury","March","April","May","June","July","August","September","October","November","December"};
	if(r==0)
		cout<<"You have entered an invalid date";
	else
	{
		cout<<"You have entered a valid date:\n";
		cout<<months[D.month-1]<<" "<<D.day<<" "<<D.year;
	}
}

int main()
{
	int result;
	get_data();
	result=validate();
	display(result);
	return 0;
}
