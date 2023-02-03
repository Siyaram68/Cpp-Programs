#include<iostream>
#include<string.h>

using namespace std;

class Bank
{
    char name[20];
    int ano;
    char atype[20];
    float bal;
    
    public:
    static int trans; 
    
    void get(int no,char *n,char *t,float b)    // To input name & account type from the user
    {	 	  	 	   	      	    	  	 	
        strcpy(name,n);
        ano=no;
        strcpy(atype,t);
        bal=b;
    }

    float deposit()                             // To input the amount the user wishes to deposit
    {
        float amt;
        cout<<"\nEnter amount you wish to deposit: ";
        cin>>amt;
        bal=bal+amt;
        return bal;
    }

    float withdrw()                             // To input the amount the user wishes to withdraw
    {
        float amt;
        cout<<"\nHow much do you wish to withdraw: ";
        cin>>amt;
        bal=bal-amt;
        return bal;
    }

    void disp()                                 // To display the account details
    {
        trans++;
        cout<<"\n\nAccount number: "<<ano;
        cout<<"\nName: "<<name;
        cout<<"\nAccount type: "<<atype;
        cout<<"\n\nNet Balance after Deposit: "<<deposit();
        cout<<"\n\nAfter Withdraw Amount balance: "<<withdrw();
        cout<<"\n\nNumber of Transaction = "<<trans;
    }
};

int Bank :: trans=0;
int main()
{	 	  	 	   	      	    	  	 	
    int n;
    char nm[20],t[20];
    float a;
    Bank bk;    // Declaring an object 
    
    cout<<"***** ENTER YOUR BANK DETAILS *****";
    cout<<"\nEnter Account no.: "; cin>>n;
    cout<<"\nEnter Name: "; cin>>nm;
    cout<<"\nEnter Account type: "; cin>>t;
    cout<<"\nEnter Balance amount: ";cin>>a;
    
    bk.get(n,nm,t,a);
    bk.disp();
    
    return 0;
}
