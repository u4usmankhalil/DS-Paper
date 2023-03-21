#include<bits/stdc++.h>
#include<conio.h>
#include<stack>
using namespace std;
struct Queue{
stack<int>s1,s2;
void enque(int val)
{
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	s1.push(val);
	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}
void display()
{
	if(s1.empty()){cout<<"Queue is empty\n";}
	else
	{
		stack <int > temp=s1;
		while(!temp.empty())
		{
			cout<<temp.top()<<"|";
			temp.pop();
		}
	}
}
int dequeue()
{
	if(s1.empty())
	{
		cout<<"Empty Queue\n";
		exit(0);
	}
	int val=s1.top();
	s1.pop();
	return val;
}
};
main()
{	
	Queue q1;
	q1.enque(5);
	q1.enque(10);
	q1.enque(15);
	q1.enque(25);
	cout<<endl<<endl;
	q1.display();
	cout<<endl<<endl;
	cout<<"|"<<q1.dequeue();
	cout<<"|"<<q1.dequeue();
	cout<<"|"<<q1.dequeue();
	cout<<"|"<<q1.dequeue();
	system("color f3");
	getch();
}

