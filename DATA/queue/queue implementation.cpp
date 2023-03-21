#include<iostream>
#include<conio.h>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void Insert(int val)
{
	if(rear==n-1)
	{
		cout<<"Queue OverFlow\n";
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=val;
	}
}
void delet()
{
	if(front==-1 || front>rear)
	{
		cout<<"Queue UnderFlow\n";
	}
	else
	{
		cout<<"Deleted Queue Element is:|"<<queue[front]<<"|"<<endl;
		front++;
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		cout<<"Queue Elements are\n|";	
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<"|";
		}	
		cout<<endl;
	}
}
main()
{
	system("color f3");
	Insert(10);
	Insert(20);
	Insert(30);
	display();	
	delet();
	display();	
	getch();
}
