#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class OVERLOAD
{	 	  	 	   	      	    	  	 	
   public: 

    int add(int a , int b)
    {
        cout<<"\n Passing two intergers parameters ";
        return (a+b);
    }
    
    double add (double a, double b)
    {
        cout<<"\n Passing two Double parameters ";
        return (a+b);
    }
    
    int add(int a, int b, int c)
    {
        cout<<"\n Passing three integer parameters ";
        return (a+b+c);
    }

    double add(double a, double b, double c)
    {
        cout<<"\n Passing three double parameters ";
        return (a+b+c);
    }
    
    double add (int a, double b)
    {
        cout<<"\n Passing first parameter as interger and second as double ";
        return (a+b);
    }

    double add (double a, int b)
    {
    cout<<"\n Passing first parameter as double and second as integer ";
    return (a+b);
    }	 	  	 	   	      	    	  	 	
}
obj;

int main()
{
    
  cout<<obj.add(6,2)<<endl;
  
  cout<<obj.add(5.4,2)<<endl;
  
  cout<<obj.add(2,3,4)<<endl;
  
  cout<<obj.add(3.2,3.2,3.3)<<endl;
  
  cout<<obj.add(7,2,1)<<endl;
  
  cout<<obj.add(9,8.4)<<endl;

}
