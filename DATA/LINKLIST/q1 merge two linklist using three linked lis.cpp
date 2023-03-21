#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(){
			next=NULL;
		}
	void display(Node *head);
	int count(Node *head);
	void insert(Node *&head,int val);
};
Node *merge(Node*&head1,Node*&head2)
{
	Node*nNode=new Node();
	Node *p3=nNode;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data < head2->data)
		{
			p3->next=head1;
			head1=head1->next;
		}
		else
		{
			p3->next=head2;
			head2=head2->next;
		}
		p3=p3->next;
	}
	if(head1!=NULL)
	{
		p3->next=head1;
	}
	if(head2!=NULL)
	{
		p3->next=head2;
	}
//	display
//	Node *tem=p3;
//	while(tem!=NULL)
//	{
//		cout<<tem->data<<endl;
//		tem=tem->next;
//	}
	return nNode->next;
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
int Node::count(Node *head)
{       
	int j=0;                                                     
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		j++;
		temp=temp->next;
	}
//	cout<<endl;
	return j;
}
//Node*sort(Node *head,int j)
//{   
//	cout<<"\n\n|||&&DISPLAYINGGG|||\n\n";    
//	Node *temp,*t;
//	temp=head;t=head;
//	for(int i=1;i<=j;i++)
//	{
//		temp=head;
//		while(temp!=NULL)
//		{
////			cout<<"1"<<" ";
//			if(temp->data < t->data)
//			{
//				t->data=temp->data;
//			}
//			cout<<temp->data<<" ";
//			temp=temp->next;
//		}
////		cout<<"-->"<<t->data;
//		cout<<endl;
//		t=t->next;
//	}	
//	return head;
//}
void Node::insert(Node *&head,int val)
{
	Node *n=new Node();
	if(head==NULL)
	{
		head=n;
		head->data=val;
		head->next=NULL;
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
//	n->prev=temp;
}
main()
{
	cout<<"This is YOUR main funciton\n";
	Node *n1;
	Node *head1=NULL;
	Node *head2=NULL;
	int i,n,m;
	cout<<"Enter number of nodes for linklist-1:";
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cout<<"Enter value for node-"<<i<<":";
		cin>>n;
		n1->insert(head1,n);
	}
	cout<<"linklist-1 is as follows:\n";
	n1->display(head1);
	cout<<"Enter number of nodes for linklist-2:";
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cout<<"Enter value for node-"<<i<<":";
		cin>>n;
		n1->insert(head2,n);
	}
	cout<<"linklist-2 is as follows:\n";
	n1->display(head2);
	Node*nhead=merge(head1,head2);
	cout<<"Values of Node merged list are:\n";
	int j;j=n1->count(nhead);
	cout<<endl<<endl<<"J="<<j<<endl;
	n1->display(nhead);
//	Node*t;t=;
//	sort(nhead,j);
	getch();
}
