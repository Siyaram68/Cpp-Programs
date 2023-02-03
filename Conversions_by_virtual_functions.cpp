#include <iostream>
using namespace std;

class convert
{
    protected:
        double val1;
        double val2;
    
    public: convert(double i)
    {	 	  	 	   	      	    	  	 	
        val1 = i;
    }
    
    double getconvert()
    {
        return val2;
    }
    
    double getinit()
    {
        return val1;
    }
    
    virtual void compute() = 0;
};

class lit_to_gal : public convert   // Liters to Gallons
{
    public:
    lit_to_gal(double i) : convert(i)
    {
    }

    void compute()
    {
        val2 = val1 / 3.7854;
    }

    
};

class far_to_cel : public convert       // Fahrenheit to Celsius
{
    public:
    far_to_cel(double i) : convert(i)
    {	 	  	 	   	      	    	  	 	
    }
    void compute()
    {
        val2 = (val1-32) / 1.8;
    }
};

int main()
{
    int num;
    convert *p;
    
    cout<<"Enter LITERS for conversion to GALLONS : ";
    cin>>num;
    lit_to_gal lgob(num);
    
    cout<<"\nEnter FAHRENHEIT for conversion to CELSIUS : ";
    cin>>num;
    far_to_cel fcob(num);

    p = &lgob;
    cout<<"\n";
    cout<< p->getinit() << " Liters is ";
    p->compute();
    cout<< p->getconvert()<< " Gallons\n";
    
    p = &fcob;
    cout<< p->getinit() << " degree Fahrenheit is ";
    p->compute();
    cout<< p->getconvert()<< " degree Celsius\n";
    
    return 0;
}
