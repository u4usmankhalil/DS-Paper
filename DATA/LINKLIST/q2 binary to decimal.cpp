#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node()
		{
			next=NULL;
		}
		int binarytodecimal(Node *head,int n);
		void insert(Node *&head,int n);
		void display(Node *head);
		int count(Node *n);
};
int Node::count(Node *n)
{
	int j=0;
	while(n!=NULL)
	{
		j++;
		n=n->next;
	}
//	cout<<"j===="<<j<<endl;
	return j;
}
int Node::binarytodecimal(Node *head,int n)
{
	int res=0,sum=0;
	n=n-1;
	while(head!=NULL)
	{		
		res=head->data*pow(2,n);
		sum=sum+res;
		n--;
		head=head->next;
	}
	return sum;
//	cout<<"binary to decimal is:"<<sum<<endl;
//	return;
}
void Node::display(Node *head)
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void Node::insert(Node *&head,int val)
{
	if(val>1 || val<0){cout<<"Invalid Value\nNode Can't be inserted\n'";return;	}
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
}
main()
{
	Node *n1;
	Node *head;
	head=NULL;
	int m,n,i;
	cout<<"Enter number of times you want to add nodes:";
	cin>>m;
		cout<<"Enter single binary digit for each Node:\n";
	for(i=1;i<=m;i++)
	{
		cout<<"Enter digit-"<<i<<":";
		cin>>n;
		n1->insert(head,n);
	}
	n1->display(head);
	int res;
	res=n1->count(head);
	res=n1->binarytodecimal(head,res);
	cout<<"Binary to integer is:"<<res<<endl;
	getch();
}
