#include <iostream>
#include <string.h>
using namespace std;
struct cricket
{
	char pname[20];
	char tname[20];
	float bavg;
}c[50],temp;

int main()
{
    int i,j,n;
    cout<<"Enter the Number of players:";
    cin>>n;

	for(i=0;i<n;i++)   
	{
		cout<<"Enter Player Name: ";
		cin>>c[i].pname;
		cout<<"Enter Team Name: ";
		cin>>c[i].tname;
		cout<<"Enter Batting Average: ";
		cin>>c[i].bavg;
		cin.ignore();
	}
    cout<<"Cricket Record: \n "<<endl;
     for(i=0;i<n;i++)                         
     {
         for(j=i+1;j<n;j++)
         {
             if(strcmp(c[i].tname,c[j].tname)>0)
             {
                 temp=c[i];
                 c[i]=c[j];
                 c[j]=temp;
             }	 	  	 	    	 	  	       	 	
        
         }
     }
    for(i=0;i<n;i++)
    {
      cout<<"Team Name: "<<c[i].tname<<endl;
      cout<<"Player Name "<<c[i].pname<<endl;
      cout<<"Batting Average: "<<c[i].bavg;
      cout<<"\n";
      cout<<"\n";
    }
	return 0;
}
