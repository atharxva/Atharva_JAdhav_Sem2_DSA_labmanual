//Implement Linear Queue ADT using Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }  
};

class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return front == NULL;
    }
    void enqueue(int element)
    {
        Node* newnode = new Node(element);
        if(isEmpty())
        {
            front = rear = newnode;
        }
        else{
            rear->next = newnode;
            rear = newnode;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"List is empty";
        }
        else
        {
            Node* temp = front;
            front = front->next;
            delete temp;
            if(front == NULL)
            {
                rear = NULL;
            }
        }
    }
    int peek()
    {
        if(isEmpty())
        {
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main()
{
Queue q1;
q1.enqueue(10);
q1.enqueue(20);
q1.enqueue(30);
q1.enqueue(40);
q1.enqueue(50);
q1.dequeue();
q1.dequeue();
q1.dequeue();
cout<<"Element at front is:- "<<q1.peek();
return 0;
}