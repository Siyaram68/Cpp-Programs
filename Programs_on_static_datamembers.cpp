#include <iostream>
#include<string.h>

using namespace std;

class Data 
{   private:
    int regNo;
    char name[20];
    
    public:
    static int objectCount;
    Data() 
    {	 	  	 	   	      	    	  	 	
        objectCount++;
    }

   void getdata()                       // Enter the input from the user
   {
        cout << "\nEnter Reg No: "<<endl;
        cin >> regNo;
        cout << "Enter Name: "<<endl;
        cin >> name;
   }

   void disdata()                       // Display the input entered by the user
   {
        cout<<"\nReg Number = "<< regNo <<endl;
        cout<<"Name = "<< name <<endl;
        cout<<endl;
   }
};

int Data :: objectCount = 0;

int main() 
{
    cout << "***** Demonstrate Static Members Of a Class *****"<<endl;
    
    Data s1;
    s1.getdata();
    s1.disdata();
   
    Data s2;
    s2.getdata();
    s2.disdata();
    
    Data s3;
    s3.getdata();
    s3.disdata();
   
   
    cout << "Total objects created = " << Data :: objectCount << endl;    // Display the number of output
   
    return 0;
}	 	  	 
