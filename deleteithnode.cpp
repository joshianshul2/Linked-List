#include<iostream>
using namespace std;
#include"classll.cpp"
// By Recursion :->
Node* ithdelete(Node* head,int i)
{
    Node* m=head;
   if(head==NULL)
   {
       return NULL;
   }
    m=ithdelete(head->next,i-1);
    head->next=m;
    if(i==0)
    {
        Node* a=head;
        head->next=head;
        head=m;
        delete a;
        
    }
    return head;
}




int main()
{
    Node* head=Insert();
    Print(head);
    cout<<"Enter the Deleted Index "<<endl;
    int i;
    cin>>i;
    head=ithdelete(head,i);
    Print(head);
}
