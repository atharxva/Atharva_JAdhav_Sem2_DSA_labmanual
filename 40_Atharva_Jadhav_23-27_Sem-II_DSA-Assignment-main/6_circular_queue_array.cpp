//Implement Circular Queue ADT using array.
#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front,rear;
    int* arr;

    Queue(int size)
    {
        this->size= size;
        front = rear = -1;
        arr = new int[size];
    }
void enqueue(int element)
{
    if(front == 0 && rear == size-1 || (rear == (front - 1) % (size - 1)))
    {
        cout<<"Queue is full";
    }
    else if(front ==-1 && rear ==-1)
    {
        front = rear = 0;
    }
    else if(rear == size-1 && front !=0)
    {
        rear = 0;
    }
    else{
        rear+=1;
    }
    arr[rear] = element;
}
void dequeue()
{
    if(front ==-1 && rear == -1)
    {
        cout<<"Empty";
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else if(front == size-1)
    {
        front = 0;
    }
    else{
        front+=1;
    }
}
int peek()
{
    if(front ==-1 && rear == -1)
    {
        cout<<"Empty";
        return -1;
    }
    else{
        return arr[front];
    }
}
};
int main()
{
Queue q1(5);
q1.peek();
cout<<endl;
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
q1.dequeue();
q1.dequeue();
q1.enqueue(10);
q1.dequeue();
q1.enqueue(11);
cout<<"element at front is "<<q1.peek();
return 0;
}