#include <iostream>

using namespace std;

class Student{                              // Declaring class Student

    int Regn_No;                            // Initialising Data Members
    char Name[20];
    float S1,S2,S3,avg;

    public:
        void read();                        // Initialising Member Functions
        void display();
        float average_marks();
};

     void Student :: read()                 // Function to read the Data Members 
    {	 	  	 	   	      	    	  	 	

        cout << "Enter the Registration Number: ";
        cin >> Regn_No;
        cout << "\nEnter the Name of the student: ";
        cin >> Name;
        cout << "\nEnter the marks in three subjects:\n";
        cout <<"Subject 1: ";
        cin >> S1;
        cout <<"\nSubject 2: ";
        cin >> S2;
        cout <<"\nSubject 3: ";
        cin >> S3;

    }
    
    float Student :: average_marks()        // Function to calculate average marks
    {
        avg = (S1+S2+S3)/3.0;
        return avg;
    }
    
    void Student :: display()               // Function to display the Data Members
    {
        cout << "\nStudent's Name: "<<Name;
        cout << "\nRegistration Number: "<<Regn_No;
        cout << "\nMarks in - Subject 1: "<<S1 <<"\tSubject 2: "<<S2<<"\tSubject 3: "<<S3;
        cout << "\nAverage marks: "<<avg;
        cout <<"\n_____\n";
    }


int main()
{
    Student s1,s2,s3;                       // Initialising object in main() function
    
    s1.read();
    s2.read();
    s3.read();
    
    s1.average_marks();
    s2.average_marks();
    s3.average_marks();
    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}	 	  	 	   	      	    	  	 	
