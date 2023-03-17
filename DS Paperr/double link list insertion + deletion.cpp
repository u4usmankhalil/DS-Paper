#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Node{
//	private:
	public:
		int data;
		Node *next;
		Node *prev;
		Node(){//if Node(int val) than below line uncomment
//			data=val;
			next=NULL;//agr ham yahan pr null likh rahy hen to newLast ky next=null krny ki zarorat nahi ha
			prev=NULL;//agr ham yahan pr null likh rahy hen to newhead ky prev=null krny ki zarorat nahi ha
				//lkn mny phr bhi likha ha
		}
		void insertAtEnd(Node *&head,int val);
		void insertAtHead(Node *&head,int val);
		void insertAtAfter(Node *&head,int val);
		void display(Node *head);
		void usman();
};
void deleteNode(Node*& head, Node* del) {
   if (head == NULL || del == NULL) {
      return;
   }
   if (head == del) {
      head = del->next;
   }
   if (del->next != NULL) {
      del->next->prev = del->prev;
   }
   if (del->prev != NULL) {
      del->prev->next = del->next;
   }
   delete(del);
   return;
}
void Node::usman()
{
	cout<<"zzz";
}
void Node::display(Node *head)
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}
void Node::insertAtHead(Node *&head,int val)
	{
		Node *nHead=new Node();
		nHead->data=val;
		nHead->prev=NULL;
		nHead->next=head;
		if(head!=NULL)
		{
		head->prev=nHead;
		}
//agr constructor me node(int  val) kia to below line likhny ki koi zarorat nahi ha
		head=nHead;
	}
void Node::insertAtEnd(Node *&head,int val)
{
	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}	
	Node *n=new Node();
	Node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->data=val;
	n->next=NULL;
	n->prev=temp;
}
////abhi ye lgta ha sahi nahi kam krr raha
void Node::insertAtAfter(Node *&head,int val)
{
	if(head==NULL)
	{
		cout<<"Previous can't be NULL...";
	}
	else
	{
		Node *nafter=new Node();
		nafter->data=val;
		nafter->next=head->next;
		head->next=nafter;
		nafter->prev=head;
		if(nafter->next!=NULL)
		{
			nafter->next->prev=nafter;
		}	
	}
}
main()
{
	Node *n1,m;
	Node *head=NULL;
	n1->insertAtHead(head,1);
//	m.insertAtHead(head,1);ye bhi thk ha
	n1->insertAtEnd(head,2);
	n1->insertAtAfter(head,100);
	n1->insertAtEnd(head,3);
//	n1->insertAtHead(head,100);
//	n1->insertAtHead(head,4);
//	n1->insertAtHead(head,5);
//	n1->insertAtHead(head,3);
//	n1->insertAtHead(head,4);
   deleteNode(head, head->next->next);
	n1->display(head);
//	n1->insertAtEnd(head,5);
//	n1->display(head);
//	n1->usman();
	getch();
}

