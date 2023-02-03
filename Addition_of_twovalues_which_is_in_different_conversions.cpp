#include<iostream>
using namespace std;

class DB;
class DM        // Declaring the class for meter-centimeter
{	 	  	 	   	      	    	  	 	
    float meter,centi;
    public:
    
    void getdata()
    {
        cout<<"\nEnter the distance in(meter-centimeter):";
        cin>>meter>>centi;
    }
 
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<meter<<" meters and "<<centi<<" centimeter";
    }
    
    friend void add(DM &,DB &);
};

class DB        // Declaring the class for feet-inch
{
    float inch,feet;
    public:
    
    void getdata()
    {
        cout<<"\nEnter the distance in(feet-inch):";
        cin>>feet>>inch;
    }
 
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<feet<<" feet and "<<inch<<" inch";
    }
 
    friend void add(DM &,DB &);
};

void add(DM &x,DB &y)       // To add one object of DM with another object of DB
{	 	  	 	   	      	    	  	 	
    int ch;
    cout<<"\nPress 1 for meter-centi:";
    cout<<"\nPress 2 for feet-inch:";
    cout<<"\nEnter your choice:";
    cin>>ch;
    
    if(ch==1)
    {
        DM d;
        int c=(x.meter*100+x.centi+y.feet*30.48+y.inch*2.54);
        if(c>=100)
        {
            d.meter=c/100;
            d.centi=c%100;
        }
        else
        {
            d.meter=0;
            d.centi=c;
        }
        d.display();
    }
 
    else
    {
        DB d;
        int i=(x.meter*39.37+x.centi*.3937008+y.feet*12+y.inch);
        if(i>=12)
        {
            d.feet=i/12;
            d.inch=i%12;
        }
        else
        {
            d.feet=0;
            d.inch=i;
        }	 	  	 	   	      	    	  	 	
        d.display();
    }
}

int main()
{
    DM x;
    DB y;
    
    x.getdata();
    y.getdata();
    add(x,y);
    
    return 0;

}
