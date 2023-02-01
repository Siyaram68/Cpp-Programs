#include<iostream>
using namespace std;
class matrix
{
    int a[10][10],r,c;
    public:
        void read()
        {
            cout<<"Enter rows:";
            cin>>r;
            cout<<"Enter columns:";
            cin>>c;
            cout<<"Enter elements:\n";
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cin>>a[i][j];
                }
            }
        }
        void display()
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cout<<a[i][j]<<"\t";
                    
                }
                cout<<endl;
            }
        }
        int operator==(matrix m)
        {
            if(r==m.r && c==m.c)
            return 1;
            else
            return 0;
        }
        matrix operator+(matrix m)
        {
            matrix temp;
            temp.r=r;
            temp.c=c;
            for(int i=0;i<r;i++)
            
                for(int j=0;j<c;j++)
                
                    temp.a[i][j]=a[i][j]+m.a[i][j];
                    return temp;

        }
        matrix operator-(matrix m)
        {
            matrix temp;
            temp.r=r;
            temp.c=c;
            for(int i=0;i<r;i++)
            
                for(int j=0;j<c;j++)
                
                    temp.a[i][j]=a[i][j]-m.a[i][j];
                    return temp;
            
        }
};
int main()
{
    matrix a,b,res;
    a.read();
    b.read();
    if(a==b)
    {
        cout<<"\nSum:\n";
        res=a+b;
        res.display();
        cout<<"\nDifference:\n";
        res=a-b;
        res.display();

    }
    else{
        cout<<"Wrong input\n";
    }
}