#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Node{
	public:
		int Value,j;
		Node *Next;
		Node()
		{
			j=0;
			Next=NULL;
		}	
};	Node *head;//=new Node();//agr () na lgao to no issue
void count(Node *n)
{
	int j=0;
	while(n!=NULL)
	{
		 j++;
		n=n->Next;
	}
	cout<<"Node="<<j<<endl;
}
void printlist(){
	Node *n=head;
	while(n!=NULL)
	{
		cout << n->Value<<"\t";
		n=n->Next;
	}
	cout<<endl;
}
void insertAtTheFront(int newValue){//** means we are passing a parameter pointer to pointer variable
	Node *newHead=new Node();
	newHead->Value=newValue;
	newHead->Next=head;
	head=newHead;
}
void insertAtTheEnd(int newValue){
//step-1->	prepare a new node
	Node *newEnd=new Node();
	newEnd->Value=newValue;
	newEnd->Next=NULL;
//step-2 IF linklist is empty ,new node will be head node
	if(head==NULL)
	{
		insertAtTheFront(newValue);
//		head=newEnd;
//		return;
	}
	else//else khud hi lagaya
	{
//step-3 Find last Node
	Node*last=head;
	while(last->Next!=NULL)
	{
		last=last->Next;
	}
//Step-4 Insert NewEnd after last node(at the end)
	last->Next=newEnd;
	}
}
void insertAfter(int prev)
{
	Node*temp=head;
	int flag=0,newValue;
	while(temp!=NULL)
	{
		if(temp->Value==prev)
		{
			cout<<"Enter value that you want to insert:";
			cin>>newValue;
			flag=1;
			if(temp->Next==NULL)
			{
				insertAtTheEnd(newValue);	
			}
			else
			{
				Node *after=new Node();
				after->Value=newValue;
				after->Next=temp->Next;
				temp->Next=after;
			}
			break;
		}
		temp=temp->Next;
	}
	if(flag==0)
	{
		cout<<"Previous value does not exist\n";
	}
}
main()
{
	insertAtTheFront(11);
	insertAtTheFront(21);
	insertAtTheEnd(2);
	insertAtTheEnd(22);
	int v;
	printlist();
	cout<<"enter a value after which you want to insert:";
	cin>>v;
	insertAfter(v);
	printlist();
	getch();
}
