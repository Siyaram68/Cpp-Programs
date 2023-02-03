#include<iostream>
using namespace std;

template <typename BB>
void show(int n,BB ar[]);
template <typename tempa>
void Bubble_sorting(int n,tempa ar[])
{	 	  	 	   	      	    	  	 	
    tempa temp;
    cout<<"\nBefore sorting elements are:";
    show(n,ar);
    for(int i=0;i<n-1;i++)
    {
        for(int a=0;a<n-i-1;a++)
        {
            if(ar[a]>ar[a+1])
            {
                temp=ar[a];
                ar[a]=ar[a+1];
                ar[a+1]=temp;
            }
        }

    }
    cout<<"\nAfter sorting:\n";
    show(n,ar);
}

template <class BB>
void show(int n,BB ar[])
{
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<ar[j]<<"\t";
    }
}

int main()
{
    int choice,n;
    float ab[100];
    while (1)
    {	 	  	 	   	      	    	  	 	
        cout<<"\n*MENU*";
        cout<<"\n1.Enter element";
        cout<<"\n2.Exit";
        cout<<"\n";
        cout<<"\nEnter your choice:  ";
        cin>>choice;
        switch (choice)
        {
            case 1: cout<<"\nEnter the no. elements:";
                    cin>>n;
                    cout<<"\nEnter element: \n";
                    for(int j=0;j<n;j++)
                    cin>>ab[j];
                    Bubble_sorting(n,ab);

            case 2: exit(0);
                    break;
            default:
                cout<<" \n You selected the wrong input please choose again.\n";
        };
    }
    return 0;
}
