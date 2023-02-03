#include<iostream>
#include<string.h>
using namespace std;

struct Census{
    char city_name[20];
    long population;
    float literacy=0.0;
}s[50],temp;


int main()
{
    int i,j,n;
    cout<<"Enter The Number of Cities:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter city name:";
        cin>>s[i].city_name;
        cout<<endl<<"Enter city population:";
        cin>>s[i].population;
        cout<<endl<<"Enter literacy:";
        cin>>s[i].literacy;
    }
    
    for(i=0;i<=n;i++) //sorting 
    {
        for(j=i+1;j<=n;j++)
        {
        if(strcmp(s[i].city_name,s[j].city_name)>0)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }	 	  	 	    	 	  	       	 	
        
        }
    }
    cout<<endl<<"INFORMATION"<<endl;
    
    for(i=1;i<n+1;i++)
    {
        cout<<"City Name:"<<s[i].city_name<<endl;
        cout<<"City Population:"<<s[i].population<<endl;
        cout<<"City Literacy:"<<s[i].literacy<<endl;
    }
    return 0;
}
