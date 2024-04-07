/*implement Array and write a menu driven program to perform all the operation on array elements*/
#include<iostream>
using namespace std;
void insertion(int arr[],int &size,int position,int element)
{
     for(int i=size-1;i>=position;i--)
        {
            arr[i+1] = arr[i];
        }
        size +=1;
        arr[position] = element;
}
void deletion(int arr[],int &size, int index)
{
    for(int i = index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size -=1;
}
int indexfinder(int arr[],int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            return i;
            break;
        }
    }
    return -1;
}
void traversal(int arr[],int &size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[],int &size)
{
    int temp;
    for(int i=0; i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
int choice,position,element,index;
char ch;
int arr[50];
int n;
cout<<"Enter the size of array ";
cin>>n;
cout<<"Enter array elements";
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
do{
    cout<<"1.Insertion\n2.Deletion\n3.Searching\n4.sorting\n5.Traversal";
    cin>>choice;
    switch (choice)
    {
    case 1: //insertion
        cout<<"Enter the index where you want to insert ";
        cin>>position;
        cout<<"Enter the element to insert ";
        cin>>element;
        insertion(arr,n,position,element);
        break;

    case 2:   //deletion
        cout<<"Enter element to delete";
        cin>>element;
        index = indexfinder(arr,n,element);
        deletion(arr,n,index);
        break;
    
    case 3:  //searching
        cout<<"Enter element to search ";
        cin>>element;
        index = indexfinder(arr,n,element);
        if(index !=-1)
        {
            cout<<"Element is present at index "<<index;
        }
        else{
            cout<<"Element is not present ";
        }
        break;

    case 4:  //sorting
            sort(arr,n);
        break;
    
    case 5:  //traversal
        traversal(arr,n);
        break;
    default:
        cout<<"wrong choice "; 

    }
    cout << "\n Do you want to continue?";
    cout << "(Press y/n)";
    cin >> ch;
}while(ch == 'y');
return 0;
}