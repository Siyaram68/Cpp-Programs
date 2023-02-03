#include <iostream>
using namespace std;

class COMPLEX{
    int real, imag;
    public:
        void read(){
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }
        void display(){
            cout << real << "+" << imag << "i" << endl;
        }
        COMPLEX operator+(COMPLEX obj){
            COMPLEX temp;
             temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
             return temp;    
        }
        COMPLEX operator+(int x){
            COMPLEX temp;
            temp.real = real + x;
            temp.imag = imag ;
            return temp;    
        }
};

int main(){
    COMPLEX ob1, ob2, res;
    int x;
    cout << "Complex number enter: " << endl;
    cout << "COMPLEX 1: " << endl;
    ob1.read();
    cout << "COMPLEX 2: " << endl;
    ob2.read();
    cout << "Enter an integer: ";
    cin >> x;
    res = ob1+ob2;
    cout << "Sum of complexes: "; res.display();
    cout << "Sum of complexes and integer: "; res = ob1 + x;
    res.display();
    res = ob2 + x;
    res.display();
    return 0;
}
