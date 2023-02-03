#include<iostream>
using namespace std;
class EMPLOYEE
{	 	  	 	   	      	    	  	 	
    private:
        string name;
        char emp_code[20];
    public:
        float gs=0.0;
        void read();
        void display();
};

void EMPLOYEE :: read()
{
            cout<<"\nEnter Employee Name: ";
            cin>> name;
            cout<<"Enter Employee Code: ";
            cin>>emp_code;
            cout<<"Enter Employee Gross Salary: ";
            cin>>gs;
}

void EMPLOYEE :: display()
{
            cout<<"\nEmployee Name: "<<name<<endl;
            cout<<"Employee Code: "<<emp_code<<endl;
            cout<<"Gross Salary: "<<gs<<endl;
}

int main()
{
    EMPLOYEE ob[20],temp;
    int n,i,j;
    cout<<"***** EMPLOYEE REPORT *****"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Enter the number of Employee: ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {	 	  	 	   	      	    	  	 	
        ob[i].read();
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ob[j].gs>ob[j+1].gs)
            {
                temp=ob[j];
                ob[j]=ob[j+1];
                ob[j+1]=temp;
            }
        }
    }
   
    cout<<"\n**** Employee with highest salary ******* "<<endl;
    ob[n-1].display();
    cout<<"\n**** Employee with the lowest salary ******* "<<endl;
    ob[0].display();
    return 0;
}
