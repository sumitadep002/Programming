<<<<<<< HEAD
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    
    
};
class stack{
    node* top;
    public:
    stack(){top=NULL;}
    void push(int);
    int pop();
    bool isEmpty();
    int topValue();
    
};
int main()
{
    int choice;
    int pushData;
    stack s;

    do
    {
        cout << endl<< "These are your choice: ";
        cout << endl<< "1.push";
        cout << endl<< "2.pop";
        cout << endl<< "3.top";
        cout << endl<< "4.check it is empty or not";
        cout << endl<< "5.Quit";
        cout << endl<< "Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout << endl<< "enter value to be pushed ";
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
        case 6:
            cout <<endl<<"Ok Let's quit";
            break;        
        default:cout<<endl<<"You have entered wrong choices\nPlease choice again";
            break;
        }

    } while (choice != 5);

        return 0;
    return 0;
}

    void stack::push(int d){

        if(isEmpty())
        {
            top=new node;
            top->next=NULL;
            top->data=d;
        return;
        }
        else
        {
            node* midiator=new node;
            midiator->next=top;
            top=midiator;
            top->data=d;
        }
    }
    int stack::pop(){
        if(isEmpty())
        {
        cout<<endl<<"Stack is empty";
        }
        else
        {
            int temp=top->data;
            node* temp_ptr=top;
            top=top->next;
            delete(temp_ptr);
            return temp;
        }
    }
    bool stack::isEmpty(){
        if(top==NULL)
        return true;
        else 
        return false;

    }
    int stack::topValue(){
        return top->data;
=======
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    
    
};
class stack{
    node* top;
    public:
    stack(){top=NULL;}
    void push(int);
    int pop();
    bool isEmpty();
    int topValue();
    
};
int main()
{
    int choice;
    int pushData;
    stack s;

    do
    {
        cout << endl<< "These are your choice: ";
        cout << endl<< "1.push";
        cout << endl<< "2.pop";
        cout << endl<< "3.top";
        cout << endl<< "4.check it is empty or not";
        cout << endl<< "5.Quit";
        cout << endl<< "Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout << endl<< "enter value to be pushed ";
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
        case 6:
            cout <<endl<<"Ok Let's quit";
            break;        
        default:cout<<endl<<"You have entered wrong choices\nPlease choice again";
            break;
        }

    } while (choice != 5);

        return 0;
    return 0;
}

    void stack::push(int d){

        if(isEmpty())
        {
            top=new node;
            top->next=NULL;
            top->data=d;
        return;
        }
        else
        {
            node* midiator=new node;
            midiator->next=top;
            top=midiator;
            top->data=d;
        }
    }
    int stack::pop(){
        if(isEmpty())
        {
        cout<<endl<<"Stack is empty";
        }
        else
        {
            int temp=top->data;
            node* temp_ptr=top;
            top=top->next;
            delete(temp_ptr);
            return temp;
        }
    }
    bool stack::isEmpty(){
        if(top==NULL)
        return true;
        else 
        return false;

    }
    int stack::topValue(){
        return top->data;
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
    }