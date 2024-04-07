// Implement Linear Queue ADT using array.
#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front,rear;
    int* arr;

    Queue(int size)
    {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }
bool isEmpty()
{
    return front == -1;
}
bool isFull()
{
    return rear == size-1;
}
void enqueue(int element)
{
    /*not using isEmpty and isFull function just to write the logic for checking if 
    queue is empty or full*/
    if(front == 0 && rear == size-1)
    {
        cout<<"Queue is full";
    }
    else if(front ==-1 && rear ==-1)
    {
        front = rear = 0;
    }
    else{
        rear +=1;
    }
    arr[rear] = element;
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty";
    }
    else{
        front +=1;
    }
}
int peek()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty";
        return -1;
    }
    else{
        return arr[front];
    }
}
};
int main()
{
int n;
cout<<"Enter the size of queue ";
cin>>n;
Queue q1(n);
q1.dequeue();
cout<<endl;
q1.enqueue(5);
q1.enqueue(6);
q1.enqueue(7);
q1.enqueue(8);
q1.enqueue(9);
q1.dequeue();
cout<<"element at front is "<<q1.peek();


return 0;
}