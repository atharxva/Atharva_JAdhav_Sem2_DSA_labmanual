// Implement Stack ADT using array.
#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int* arr;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top] = element;
    }
    else{
        cout<<"stack overflow";
    }
}
int pop()
{
    if(top>=0)
    {
       return arr[top --];
    }
    else{
        cout<<"Stack underflow"<<endl;
        return -1;
    }
}
int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else{
        return -1;
    }
}
bool isEmpty()
{
    return top == -1;
}
bool isFull()
{
    return top = size-1;
}
};
int main()
{
Stack s1(5);
s1.push(1);
s1.push(5);
s1.push(6);
s1.push(7);
s1.push(8);
s1.pop();
s1.pop();
cout<<endl;
//s1.push(9);
cout<<"Element on top "<<s1.peek();
return 0;
}