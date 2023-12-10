<<<<<<< HEAD
/*
*/
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        rear = NULL;
        front = NULL;
    }
    void EnQueue(int);
    void DeQueue();
    bool IsEmpty();
    bool IsFull();
    int peek();
    void print();
};
int main()
{
    int choice;
    int pushData;
    queue Q;

    do
    {
        cout << endl<< "These are your choice: ";
        cout << endl<< "1.EnQueue";
        cout << endl<< "2.DeQueue";
        cout << endl<< "3.check what is at front";
        cout << endl<< "4.check it is empty or not";
        cout<<endl<<"5.display queue";
        cout << endl<< "6.Quit";
        cout << endl<< "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl<< "enter value to be pushed ";
            cin >> pushData;
            Q.EnQueue(pushData);
            break;
        case 2:
            if (Q.IsEmpty())
                cout << endl<< "Queue is empty";
            else
                Q.DeQueue();
            break;
        case 3:
            cout << endl<< "font value is " << Q.peek();
            break;
        case 4:
            if (Q.IsEmpty())
            cout << endl<< "queue is empty";
            else
            cout << endl<< "queue is not empty";
            break;
        case 5:
            if(Q.IsEmpty())
            cout<<endl<<"Queue is empty";
            else
            Q.print();
            break;
        case 6:
            cout << endl<< "Ok Let's quit";
            break;
        default:
            cout << endl<< "You have entered wrong choices\nPlease choice again";
            break;
        }

    } while (choice != 6);

    return 0;
}
void queue::EnQueue(int x)
{

    if (rear == NULL)
    {
        rear = (node *)malloc(sizeof(node));
        (rear)->next = NULL;
        (rear)->data = x;
        front = rear;
        return;
    }
    else
    {
        while (rear->next != NULL)
        {
            rear = rear->next;
        }
        rear->next = (node *)malloc(sizeof(node));
        rear = rear->next;
        rear->next = NULL;
        rear->data = x;

        return;
    }
}
void queue::DeQueue()
{
    if (IsEmpty())
        return;
    else
    {
        node *temp = front;
        printf("\n%d is removed", (temp)->data);
        front = (temp)->next;
        free(temp);
        return;
    }
}
bool queue::IsEmpty()
{
    if (front == NULL && rear == NULL)
        return true;
    else
        return false;
}
int queue::peek()
{
    if (!IsEmpty())
        return front->data;
}
void queue::print()
{
    if (IsEmpty())
        return;
    else
    {
        node *trav = front;
        cout << endl
             << "Queue:";
        while (trav != NULL)
        {
            cout << " " << trav->data;
            trav = trav->next;
        }
    }
=======
/*
*/
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        rear = NULL;
        front = NULL;
    }
    void EnQueue(int);
    void DeQueue();
    bool IsEmpty();
    bool IsFull();
    int peek();
    void print();
};
int main()
{
    int choice;
    int pushData;
    queue Q;

    do
    {
        cout << endl<< "These are your choice: ";
        cout << endl<< "1.EnQueue";
        cout << endl<< "2.DeQueue";
        cout << endl<< "3.check what is at front";
        cout << endl<< "4.check it is empty or not";
        cout<<endl<<"5.display queue";
        cout << endl<< "6.Quit";
        cout << endl<< "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl<< "enter value to be pushed ";
            cin >> pushData;
            Q.EnQueue(pushData);
            break;
        case 2:
            if (Q.IsEmpty())
                cout << endl<< "Queue is empty";
            else
                Q.DeQueue();
            break;
        case 3:
            cout << endl<< "font value is " << Q.peek();
            break;
        case 4:
            if (Q.IsEmpty())
            cout << endl<< "queue is empty";
            else
            cout << endl<< "queue is not empty";
            break;
        case 5:
            if(Q.IsEmpty())
            cout<<endl<<"Queue is empty";
            else
            Q.print();
            break;
        case 6:
            cout << endl<< "Ok Let's quit";
            break;
        default:
            cout << endl<< "You have entered wrong choices\nPlease choice again";
            break;
        }

    } while (choice != 6);

    return 0;
}
void queue::EnQueue(int x)
{

    if (rear == NULL)
    {
        rear = (node *)malloc(sizeof(node));
        (rear)->next = NULL;
        (rear)->data = x;
        front = rear;
        return;
    }
    else
    {
        while (rear->next != NULL)
        {
            rear = rear->next;
        }
        rear->next = (node *)malloc(sizeof(node));
        rear = rear->next;
        rear->next = NULL;
        rear->data = x;

        return;
    }
}
void queue::DeQueue()
{
    if (IsEmpty())
        return;
    else
    {
        node *temp = front;
        printf("\n%d is removed", (temp)->data);
        front = (temp)->next;
        free(temp);
        return;
    }
}
bool queue::IsEmpty()
{
    if (front == NULL && rear == NULL)
        return true;
    else
        return false;
}
int queue::peek()
{
    if (!IsEmpty())
        return front->data;
}
void queue::print()
{
    if (IsEmpty())
        return;
    else
    {
        node *trav = front;
        cout << endl
             << "Queue:";
        while (trav != NULL)
        {
            cout << " " << trav->data;
            trav = trav->next;
        }
    }
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}