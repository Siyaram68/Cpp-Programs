#include <iostream>

using namespace std;

class Employee {                            // Declaring class Employee

    int Employee_Number;                    // Initialising Data Members
    char Employee_Name[20];
    float Basic,DA,IT,Net_Sal,Gross_Sal;


    public:
        void get_Data();                    // Initialisng Member Function
        float salary_calculation();
        void display_Data();
};

     void Employee::get_Data()              // Declaring function to read data
    {	 	  	 	   	      	    	  	 	

        cout << "Enter the Employee Number: \n";
        cin >> Employee_Number;
        cout << "Enter the Employee's Name: \n";
        cin >> Employee_Name;
        cout << "Enter the Basic Salary: \n";
        cin >> Basic;

    }
    
    float Employee::salary_calculation()    // Declaring function to calculate Net Salary
    {
        DA= Basic*(52/100.0);
        IT = (Basic+DA)*(30/100.0);
        Net_Sal = (Basic+DA)-IT;
        return Net_Sal;
    }
    
    void Employee::display_Data()           // Declaring function to display data
    {
        cout << "\nEmployee Name: "<<Employee_Name;
        cout << "\nEmployee Number: "<<Employee_Number;
        cout << "\nEmployee Basic Salary: "<<Basic;
        cout << "\nEmployee DA: "<<DA;
        cout << "\nEmployee IT: "<<IT;
        cout << "\nEmployee Net Salary: "<<Net_Sal;
        cout << "\n____ \n";
    }


int main()
{
    Employee e1, e2, e3;                    // Initialising object in the class
    e1.get_Data();
    e2.get_Data();
    e3.get_Data();
    
    e1.salary_calculation();
    e2.salary_calculation();
    e3.salary_calculation();
    
    e1.display_Data();
    e2.display_Data();
    e3.display_Data();
    
    return 0;
}	 	  	 	   	      	    	  	 	
