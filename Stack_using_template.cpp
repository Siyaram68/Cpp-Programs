#include<iostream>
using namespace std;

template <typename T, int size>
class Stack
{	 	  	 	   	      	    	  	 	
    private:
        T* stack;
        int top;
    public:
        Stack();
        ~Stack();

        bool empty();
        void push(T element);
        T pop();
        void display();
};

 template<typename T, int size>
   Stack<T, size> :: Stack()
   {
       stack = new T[size];
       top = -1;
   }
 template<typename T, int size>
   Stack<T, size> :: ~Stack()
   {
       delete[] stack;
   }
    template<typename T,  int size>
    bool Stack<T, size> :: empty()
    {
        return top == -1;
    }
 template<typename T, int size>
   void Stack<T, size> :: push(T element)
   {
       if (top == size - 1)
       {
           throw out_of_range("Stack is Overload");
       }	 	  	 	   	      	    	  	 	
       stack[++top] = element;
   }

   template<typename T, int size>
   T Stack<T, size> :: pop()
   {
       if (empty())
       {
           throw out_of_range("Stack Under flow");
       }

       T element_popped = stack[top--];
       return element_popped;
   }

   template<typename T, int size>
   void Stack<T, size> :: display()
   {
       if (empty())
       {
           cout << "Stack is empty" << endl;
           return;
       }
       for (int i = top; i >= 0; i--)
       {
           cout << stack[i] << " ";
       }
       cout << endl;
   }
   
int main()
{
    const int stack_size = 10;
    Stack<int, stack_size> value;
    int choice;
    while(true)
    {	 	  	 	   	      	    	  	 	
        cout << "MENU\n";
        cout << "1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit" << endl;
        cout << "Enter a choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                int element;
                cout << "Enter element to push: ";
                cin >> element;
                try
                {
                    value.push(element);
                    cout << "Element pushed to stack\n";
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            break;
            case 2:
                try
                {
                    int popped_element = value.pop();
                    cout << "Top element in the Stack popped: " << popped_element << endl;                
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            break;
            case 3:
                cout << "Stack right now:\n";
                value.display();
            break;
            case 4:

                exit(0);
            break;
            default:
                cout << "\n You selected the wrong input please choose again.\n" << endl;
            break;
        }	 	  	 	   	      	    	  	 	
    }

    return 0;
}
