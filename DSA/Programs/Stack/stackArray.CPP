#include <iostream>
using namespace std;
class stack
{
    int top;
    int cap;
    int *a;

public:
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();
    int topValue();
    stack(int);
};

int main()
{
    int pushData;
    cout << "to create stack enter the size of the array: ";
    int size;
    cin >> size;
    stack s(size);
    int choice;

    do
    {
        cout << endl<< "These are your choice: ";
        cout << endl<< "1.push";
        cout << endl<< "2.pop";
        cout << endl<< "3.top";
        cout << endl<< "4.check it is empty or not";
        cout << endl<< "5.check it is full or not";
        cout << endl<< "6.Quit";
        cout << endl<< "Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "enter value to be pushed ";
            cin >> pushData;
            s.push(pushData);
            break;
        case 2:
            if(s.isEmpty())
            cout<<endl<<"stack is empty";
            else
            cout<<endl<<s.pop()<<" is popped";
            break;
        case 3:
            cout <<endl<< "top value is "<<s.topValue();
            break;
        case 4:
            if(s.isEmpty())
            cout<<endl<<"stack is empty";
            else
            cout<<endl<<"stack is not empty";
            break;
        case 5:
            if(s.isFull())
            cout<<endl<<"stack is Full";
            else
            cout<<endl<<"stack is not Full";
            break;
        case 6:
            cout <<endl<<"Ok Let's quit";
            break;        
        default:cout<<endl<<"You have entered wrong choices\nPlease choice again";
            break;
        }

    } while (choice != 6);

        return 0;
}

stack::stack(int capacity)
{
    cap = capacity;
    a = new int[cap];
    top = -1;
}

void stack::push(int d)
{
    if (isFull())
        printf("\nStack is full!!");
    else
    {
        top++;
        a[top] = d;
    }
}
int stack::pop()
{
    if (isEmpty())
        cout << "\nstack is Empty!!!";
    else
    {
        top--;
        return a[top];
    }
}
bool stack::isFull()
{
    if (top == cap - 1)
        return true;
    else
        return false;
}
bool stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
int stack::topValue()
{
    return a[top];

}