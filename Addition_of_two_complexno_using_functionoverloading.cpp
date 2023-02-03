#include <iostream>
#include <math.h>
using namespace std;

class COMPLEX
{	 	  	 	   	      	    	  	 	
    int real;
    int img;
    public:
        void input()            // Takes input from the user
        {
            cout << "Enter the Real and Imag part" << '\n';
            cin >> real >> img;
        }
        void output()           // Displays output 
        {
            if(img<0)
            cout << real<< "i" <<img << '\n';
            else
            cout << real << "+" << img << "i" << '\n';
        }
        friend COMPLEX ADD(int,COMPLEX);
        friend COMPLEX ADD(COMPLEX,COMPLEX);
};

COMPLEX ADD(int a , COMPLEX s2)     // Calculates the sum of integer a with the complex number s2
{
    COMPLEX temp;
    temp.real = s2.real + a;
    temp.img = s2.img;
    return temp;
}

COMPLEX ADD(COMPLEX s1, COMPLEX s2) // Calculates the sum of both the complex numbers s1 & s2
{
    COMPLEX s3;
    s3.real = s1.real + s2.real;
    s3.img = s1.img + s2.img;
    return s3;
}

int main()
{	 	  	 	   	      	    	  	 	
    COMPLEX s1,s2,sum1,sum2;    // Create objects s1,s2,sum1 & sum2
    int a;

    s1.input();
    s2.input();
    cout << "\nFirst complex number (s1) is: "<< '\n';
    s1.output();
    cout << "Second complex number (s2) is: "<< '\n';
    s2.output();
    
    cout << "\nEnter the value of a : "<<'\n';
    cin >> a;
    sum1 = ADD(a,s2);
    sum2 = ADD(s1,s2);
    cout << "\nResult of ADD(a,s2) is: "<< '\n';
    sum1.output();
    cout << "Result of ADD(s1,s2) is: "<< '\n';
    sum2.output();

    return 0;
} 
