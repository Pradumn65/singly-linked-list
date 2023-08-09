// isert at any position

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


// insert at head
void InsertAtHead(Node* &head,int  d)
{
    Node* temp= new Node(d); 
    temp->next=head;
    head=temp;
}

//insert at tail
void insertATtail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    (*tail).next=temp;
    tail=temp;
}

// insert at any position
void insertATposition(Node* head,Node* tail,int position,int d)
{
    // insert at 1st position
  if(position==1)
  {
    InsertAtHead(head,d);
    return;
  }

  Node* temp=head;
  int count=1;
  while (count<position-1)
  {
    temp=temp->next;
    count++;
  }
  
  // insert at last position
  if(temp->next==NULL)
  {
    insertATtail(tail,d);
    return;
  }
  
  // insert in between
  Node* insertnode= new Node(d);
  insertnode->next=temp->next;
  temp->next=insertnode;
  

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

    
    
    insertATtail(tail,10);
    insertATtail(tail,20);
    insertATtail(tail,30);
    insertATtail(tail,40);
    // InsertAtHead(head,100);
    
    insertATposition(head,tail,2,233);
    insertATposition(head,tail,7,230);
    print(head);

    return 0;
}