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
void insertAtstart(Node* &head)
{   
    int data;
    cout<<"Enter the data of start node ";
    cin>>data;
    Node* newnode = new Node(data);
    if(head == NULL)
    {
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}
void insertAfelement(Node* &head)
{
    int element,data;
    cout<<"Enter the element after which you want to enter ";
    cin>>element;
    Node* temp = head;
    while(temp!=NULL && temp->data!=element)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout<<"Element not found ";
        return;
    }
    cout<<"Enter the data ";
    cin>>data;
    Node* newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}
void insertbfelement(Node* &head)
{   

    int element,data;
    cout<<"Enter the element before which you want to enter ";
    cin>>element;
    if(head->data == element)
    {
        insertAtstart(head);
    }
    else{
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL && curr->data!=element)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        cout << "Element not found in the list." << endl;
        return;
    }
    cout<<"Enter the data ";
    cin>>data;
    Node* newnode = new Node(data);
    newnode->next = prev->next;
    prev->next = newnode;
    }
}
void insertAtend(Node* &head)
{
    int data;
    cout<<"Enter the data for the node ";
    cin>>data;
    Node* newnode = new Node(data);
    if(head == NULL)
    {
        head = newnode;
    }
    else{
       Node* temp = head;
       while(temp->next !=NULL)
       {
        temp = temp->next;
       }
        temp->next = newnode;
    }

}
void deletion(Node* &head)
{
    int element;
    cout<<"Enter the element to delete ";
    cin>>element;
    if(head->data == element)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL && curr->data !=element)
    {
        prev = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout<<"element not found ";
        return;
    }
    prev ->next = curr->next;
    curr->next = NULL;
    delete curr;
}
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
int n;
cout<<"enter number of list you want ";
cin>>n;
Node* head = NULL;
for(int i=0; i<n; i++)
{
    insertAtend(head);
}
insertAtstart(head);
//insertAfelement(head);
//insertbfelement(head);
//deletion(head);
print(head);
return 0;
}