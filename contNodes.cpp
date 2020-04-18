#include<iostream>
#include"classll.cpp"
using namespace std;

int countNodes(Node* head)
{
    int count=0;
    if(head==NULL)
        return 0;
    Node* temp=head;
    while(temp)
        {
            temp=temp->next;
            count++;
        }
    return count;
}

int main()
{
    Node* head=Insert();
    Print(head);
    int a=countNodes(head);
    cout<<"No of Nodes=:"<<a<<endl;
}
