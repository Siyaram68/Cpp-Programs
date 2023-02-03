#include <iostream>
#define SIZE 10         // Size of Student objects
using namespace std;

class student           //Defining a class Student
{	 	  	 	   	      	    	  	 	
    char name[20], usn[10];
    int marks1,marks2,marks3;
    
    public:
    void read();
    void display();
};

void student :: read()              // Declaring a function to read all the details
{
    cout<<"Enter the Name: "<<endl;
    cin>>name; 
    cout<<"Enter student USN: "<<endl;
    cin>>usn;
    cout<<"Enter the marks in all three subjects: "<<endl;
    cin>>marks1>>marks2>>marks3;
}

void student :: display()           // Declaring a function to display all the details 
{
    float avg, low=marks3;
    if(marks2<low)
        low=marks2;
    else if(marks3<low)
        low=marks3;
    avg=(marks1+marks2+marks3-low)/2;   // Calculating the average of two better marks for each student
    
    cout<<"Name: "<<name<<endl;
    cout<<"Students USN: "<<usn<<endl;
    cout<<"The Average Marks: "<<avg<<endl;
}

int main()
{
    
    student ob[SIZE];
    int n;
    
    cout<<"\n";
    cout<<"\n*******************************"
        <<"\n        STUDENT REPORT"
        <<"\n*******************************"
        <<"\nEnter the number of students: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {	 	  	 	   	      	    	  	 	
        ob[i].read();
    }
    
    cout<<"\n-----------------"
    <<"\nStudent Details::"
    <<"\n-----------------";
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nStudent:"<<i+1
        <<"\n";
        ob[i].display();
    }
    return 0;
}
