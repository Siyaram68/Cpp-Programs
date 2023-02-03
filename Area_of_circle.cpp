#include<iostream>
using namespace std;

class circle
{
    float radius, area, pi=3.14;   //data members
    
    public:
        circle()
        {
            cout<<"Program to calculate Area of Circle\n";
        }
        void read();          //To accept the radius from user
        void calculate();    //To calculate the area of circle
        void display();     //To display the deatils
};

inline void circle :: read(){   //Accessing data member of the class circle 
    cout<<"\nEnter the radius of Circle: ";
    cin>>radius;
}

inline void circle :: calculate(){  //Accessing data member of the class circle
        area = 3.14 * radius * radius;
}

inline void circle :: display(){    //Accessing data member of the class circle
        cout<<"\nArea of Circle : "<<area;
}

int main()
{
        circle cr;          //object created
        cr.read();         //calling the read function
        cr.calculate();   //calling the calculate function
        cr.display();    //calling the display function
        return 0;
}	 	  	 	   	      	    	  	 	
