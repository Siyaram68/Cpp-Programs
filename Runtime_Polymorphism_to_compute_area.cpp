#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//  class Figure
class Figure
{
    public:
    double height,base;

    //  constructor to assign initial values to height and base
    Figure()
    {	 	  	 	   	      	    	  	 	
        height=0;
        base=0;
    }

    //  get_data() function to get values of height and base
    void get_data()
    {
        cout<<"\nEnter Height and Base to compute Area :";
        cin>>height>>base;
    }

    //  declaration of virtual function area()
    virtual void area()
    {
    }
};

//class triangle inheriting class Figure
class Triangle : public Figure
{
    public:

    //redefining function area()
    void area()
    {
        cout<<height;
        cout<<"\nArea of Triangle = "<<(height*base)/2;
    }
};

//class Rectangle inheriting class Figure
class Rectangle : public Figure
{
    public:

    //redefining function area()
    void area()
    {	 	  	 	   	      	    	  	 	
        cout<<"\nArea of Rectangle = "<<height*base;
    }
};

int main()
{

    Figure *f;
    
    Triangle t;
    t.get_data();
    f=&t;
    f->area();
    
    Rectangle r;
    r.get_data();
    f=&r;
    f->area();
    
    return 0;
}
