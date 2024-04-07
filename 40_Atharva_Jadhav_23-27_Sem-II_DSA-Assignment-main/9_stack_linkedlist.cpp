//Implement Stack ADT using Linked List
#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* top;
    Node* next;

    Node(int val)
    {
        data = val;
        top = NULL;
        next = NULL;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void push(int element)
    {
        Node* newnode = new Node(element);
        newnode->next = top;
        top = newnode;
    }
    void pop()
    {
        if(top == NULL)
        {
            cout<<"Empty list";
        }
        else{
        Node* temp = top;
        top = top->next;
        delete temp;
        }
    }
    int peek()
    {
        if(isEmpty())
        {
            return -1;
        }
      else{
            return top->data;
        }
    }
};
int main()
{
int n,data;
cout<<"Enter the value of n";
cin>>n;
Node n1(n);
for(int i=0; i<n;i++)
{
    cout<<"Enter the data ";
    cin>>data;
    n1.push(data);
}
//n1.pop();
//cout<<n1.isEmpty();

n1.pop();
n1.pop();
n1.pop();
cout<<"top element :- "<<n1.peek()<<endl;
return 0;
}