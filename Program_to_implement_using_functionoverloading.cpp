#include<iostream>
#include<math.h>
using namespace std;

class C_POWER                                   // class C_power which contains the overloaded function power
{
    public:
            void power(double m, int n=2)       // power function where the value of m is double
            {
                double res=0;
                res=pow(m,n);
                cout<<"\nResult when the power is 2 (i.e n=2) = "<<res<<"\n";
            }	 	  	 	   	      	    	  	 	
           
            void power(int m, int n=2)          // power function where the value of m is integer
            {
                int res=0;
                res=pow(m,n);
                cout<<"\nResult when the power is an integer = "<<res<<"\n";
            }
};

int main()                                  
{
    double m1;                  // variable declaration
    int n,m2;
   
    C_POWER obj;                // Creating the object of the class
   
    cout<<"Enter a value of type double(for m): ";
    cin>>m1;
    
    cout<<"\nEnter the power of the number (for n): ";
    cin>>n;
    
    cout<<"\nEnter a value of type int(for m): ";
    cin>>m2;
    
    
    obj.power(m1,n);
    obj.power(m2,n);
    
    obj.power(m1);       //calling the respective functions as required using the object of the class
    obj.power(m2);
    
   
    return 0;
}	 	  	 	   	      	    	  	 	
