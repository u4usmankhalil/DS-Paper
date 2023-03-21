#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *prev;
		Node()
		{
			next=NULL;
			prev=NULL;
		}
		void insert(Node *&head,int val);
		void display(Node *head);
		int palindrome(Node *n);
};
int Node::palindrome(Node *n)
{
	Node *end;
	end=n;
	int j=0;
	while(end->next!=NULL )
	{
		end=end->next;
	}
	while( n->next!=NULL )
	{
		if(n->data!=end->data)
		{
			j++;
			break;
		}
		else
		{
			n=n->next;
			end=end->prev;
		}
	}
		if(j!=0)
		{
			cout<<"The LinkList is Not Palindrome"<<endl;
		}
		else
		{
			cout<<"The LinkList is  Palindrome"<<endl;
		}
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
void Node::insert(Node *&head,int val)
{
	Node *n=new Node();
	if(head==NULL)
	{
		head=n;
		head->data=val;
//		head->prev=NULL;
//		head->next=NULL;
		return;
	}	
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
main()
{
	Node *n1;
	Node *head;
	head=NULL;
	int m,n,i;
	cout<<"Enter number of times you want to add nodes:";
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cout<<"Enter value for inserting Node-"<<i<<":";
		cin>>n;
		n1->insert(head,n);
	}
	cout<<"Your link list is as follows==>>>\n";
	n1->display(head);
	n1->palindrome(head);
	getch();
}
