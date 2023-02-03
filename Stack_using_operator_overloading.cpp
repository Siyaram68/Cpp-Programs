#include<iostream>
#include<stdlib.h>
using namespace std;

const int SIZE=5;       //Stack size

//class declaration
class STACK
{	 	  	 	   	      	    	  	 	
   int items[SIZE];
   int top;
   int full();
   int empty();
   public:
   STACK()
   {
      top=-1;
   }
   STACK operator--(int);
   friend STACK operator+(STACK s1,int elem);
   friend ostream &operator<<(ostream &os,STACK &s1);
};

// checking for Stack overflow
int STACK::full()
{
   if(top==SIZE-1)
      return 1;
   else
      return 0;
}

//Checking for stack under flow.
int STACK::empty()
{
   if(top==-1)
      return 1;
   else
      return 0;
}

//function for element deletion from the stack
STACK STACK::operator--(int )
{
   if(empty())
   {	 	  	 	   	      	    	  	 	
     cout<<"Stack underflow\n";
   }
   else
   {
       cout<<"The element deleted is :"<<items[top]<<endl;
       STACK t;
       t.top=--top;
       for(int i=0;i<=top;i++)
           t.items[i]=items[i];
   }
   return *this;
}

ostream &operator<<(ostream &os,STACK &s1)
{
   for(int i=s1.top;i>=0;i--)
     os<<s1.items[i]<<"\n";
   return os;
}

//function for element insertion on to the stack
STACK operator+(STACK s1,int elem)
{
   if(s1.full())
     cout<<"\nStack overflow\n";
   else
     s1.items[++(s1.top)]=elem;
   return s1;
}

/*Main function*/
int main()
{
   STACK s1;
   int choice,elem;
   
   while(1)
   {	 	  	 	   	      	    	  	 	
     cout<<"\n1:PUSH 2:POP 3:DISPLAY 4:EXIT\n"
     <<"\nEnter your choice: ";
     cin>>choice;
     
     switch(choice)
     {
       case 1:
           cout<<"Enter the element to be inserted: ";
           cin>>elem;
           s1=s1+elem;
           break;
           
       case 2:
           s1=s1--;
           break;
           
       case 3:
           cout <<"The contents of the stack are :\n"<<s1;
           break;
           
       case 4: exit(0);
       
       default: cout <<"Invalid choice\n";
       
       exit(0);
     }
   }
   return 0;
}
