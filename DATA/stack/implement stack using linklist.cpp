#include<iostream>
#include<strings.h>
#include<conio.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *top=NULL;
class stack{
	public:
		void push(int);
		void pop();
		void display();
};
void stack::push(int val)
{
	struct Node *nnode=new Node();
	nnode->data=val;
	nnode->next=top;
	top=nnode;
}
void stack::pop()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Popped Element is:|"<<top->data<<"|"<<endl;
		top=top->next;
	}
}
void stack::display()
{
	struct Node*temp;
	if(top==NULL)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		temp=top;
		cout<<"Stack Elements are...\n";
		while(temp!=NULL)
		{
			cout<<temp->data<<"|";
			temp=temp->next;
		}
		cout<<endl;
	}
}
main()
{
	system("color f3");
	stack s1;
	s1.pop();
	s1.display();
	s1.push(10);	
	s1.push(21);	
	s1.push(31);	
	s1.display();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.display();
	getch();
}

