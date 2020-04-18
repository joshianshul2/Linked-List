#include<iostream>
using namespace std;
#include "classll.cpp"

void ithindex(Node* head,int i)
{
    Node* temp=head;
    if(head==NULL)
        return;
    int count=0;
    while(temp)
    {
        count++;
        if(count==i-1)
        {
            cout<<"Anji : "<<temp->data<<endl;
        }
        temp=temp->next;
    }
}
/* Aliter BY CN :->
void printIthNode(Node *head, int i) {
    int count=0;
    while(head!=NULL)
    {
         // count++;
            
             
    if(count==i)
       {
           cout<<head->data;
          break;
           
       }
     
    else
    {
        count++;
        head=head->next;
    }
    }
}


*/


int main()
{
    Node* head=Insert();
    Print(head);
    int i;
    cout<<"Enter The ith Index to Search"<<endl;
    cin>>i;
    ithindex(head,i);
}
