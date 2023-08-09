// insertion at tail

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int  value)
    {
        data=value;
        next=NULL;
    }
};

void insertATtail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    (*tail).next=temp;
    tail=temp;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
  
int main()
{
    Node *node1=new Node(5);
    Node* head=node1;
    Node *tail=node1;

    print(head);

    cout<<endl;
    
    insertATtail(tail,10);
    insertATtail(tail,20);
    insertATtail(tail,30);
    insertATtail(tail,40);
    print(head);

    return 0;
}