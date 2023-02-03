#include<iostream>
using namespace std;

class Twovalues
{	 	  	 	   	      	    	  	 	
	protected:
		int a;
		int b;
	public:
		inline int input()
		{
			cout<<"\nEnter the value of A\n";
			cin>>a;
			cout<<"\nEnter the value of B\n";
			cin>>b;
		}
	friend class Min_Max;
};

class Min_Max
{
	public:
		int minimum(Twovalues);
		int maximum(Twovalues);
};

int main()
{
	Twovalues obj;
	Min_Max obj1;
	obj.input();
	obj1.maximum(obj);
	obj1.minimum(obj);
	return 0;
}

int Min_Max :: maximum(Twovalues obje1)
{
	if(obje1.a>obje1.b)
	  {
	  	cout<<obje1.a<<" is Maximum"<<endl; 	  
	  }	 	  	 	   	      	    	  	 	
	else
	  {
	  	cout<<obje1.b<<" is Maximum"<<endl;
	  }
	return 0;
}

int Min_Max :: minimum(Twovalues obje2)
{
	if(obje2.a<obje2.b)
	  {
	  	cout<<obje2.a<<" is Minimum"<<endl;
	  }
	else
	  {
	  	cout<<obje2.b<<" is Minimum"<<endl;
	  }
	return 0;
}
