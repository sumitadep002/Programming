#include <iostream>
using namespace std;

class queue
{
    int rear, front;
    int cap;
    int *a;

public:
    queue(int);
    void EnQueue(int);
    void DeQueue(void);
    bool IsEmpty(void);
    bool IsFull(void);
    int peek(void);
};

int main()
{
    queue Q(5);
    int EnqueueData;
    int choice;
    do
    {
        cout << endl<< "1.Enqueue";
        cout <<endl << "2.Dequeue";
        cout << endl<< "3.print front value";
        cout << endl<< "4.Quit";
        cout << endl<< "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "enter number to enqueue: ";
            cin >> EnqueueData;
            Q.EnQueue(EnqueueData);
            break;
        case 2:
            Q.DeQueue();
            break;
        case 3:
            cout<<endl<<"Front: "<<Q.peek();
            break;
        case 4:
            cout<<endl<<"Okay let's quit";
            break;
        default:
            break;
        }
    } while (choice != 4);
    return 0;
}

queue::queue(int n)
{
    int cap = n;
    a = new int[cap];
    front = -1;
    rear = -1;
    if (a == NULL)
        cout << endl
             << "unable to create Queue";
}
void queue::EnQueue(int d)
{
    if ((rear+1)%cap==front)
        return;
    else if (IsFull())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % cap;
    }
    a[rear] = d;
}
void queue::DeQueue()
{
    if (IsEmpty())
        return;
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % cap;
    }
}
bool queue::IsEmpty()
{
    if (front=-1&&rear==-1)
        return true;
    else
        return false;
}
bool queue::IsFull()
{
    if (rear==cap-1)
        return true;
    else
        return false;
}
int queue::peek()
{
    if(front!=-1)
    return a[front];
    else
    {
        cout<<"queue is full";
    }
}
