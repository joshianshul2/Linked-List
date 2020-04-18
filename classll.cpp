#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }


    
    
};

Node* Insert()
{
    Node* head=NULL;
    Node* tail=NULL;
    int data;
    cout<<"Enter a No"<<endl;
    cin>>data;
    while(data!=-1)
    {
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
        cout<<"Enter Another No "<<endl;
        cin>>data;
    }
    
    return  head;
}

void Print(Node* head)
    {
        cout<<"Reqd Linked List is "<<endl;
        while(head)
        {
        cout<<head->data<<endl;
        head=head->next;
    }
}
