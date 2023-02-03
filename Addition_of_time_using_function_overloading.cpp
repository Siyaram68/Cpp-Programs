#include<iostream>
using namespace std;

class TIME
{
    float hours;
    int minutes;
    
    public:
    
    void read()         // To read the number of hrs & min
    {	 	  	 	   	      	    	  	 	
        cout<<"Enter the number of hours: ";
        cin>>hours;
        cout<<"Enter the number of minutes: ";
        cin>>minutes;
    }
    
    void display()      // To display the number of hrs & min
    {
        cout<<hours<<"hours"<<minutes<<"minutes"<<endl;
    }
    
    TIME add (int x)    // To add x into minutes
    {
        TIME temp(*this);
        temp.minutes = minutes+x;
        if(temp.minutes>=60)
        {
            temp.hours++;
            temp.minutes-=60;
        }
        return temp;
    }
    
    TIME add(TIME T1)   // To add T1 into minutes   // Function Overloading
    {
        TIME temp(*this);
        temp.hours += T1.hours;
        temp.minutes += T1.minutes;
        if(temp.minutes>=60)
        {
            temp.hours++;
            temp.minutes-=60;
        }
        return temp;
    }
    
    TIME (){hours = minutes =0;}	 	  	 	   	      	    	  	 	
    TIME (const TIME &s1)
    {
        hours = s1.hours;
        minutes = s1.minutes;
    }
};


int main()
{
    TIME T1, T2, r;     // Declaring the objects
    int x;
    
    cout<<"***** ENTER THE VALUES ***** \n";
    cout<<"Time 1: \n"; T1.read();
    cout<<"\nTime 2: \n"; T2.read();
    
    r = T1.add(T2);
    cout<<"\nOn adding both the time (T1 + T2): ";
    r.display();
    
    cout<<"\nEnter minutes to add (x): ";
    cin>>x;
    
    cout<<"\nOn Adding minutes to T1 (T1 +x): \n";
    r = T1.add(x);
    r.display();

    return 0;
}
