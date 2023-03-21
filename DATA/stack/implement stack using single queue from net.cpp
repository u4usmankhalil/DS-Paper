#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;
class Stack
{
	queue<int>q;
public:
	void push(int val);
	void pop();
	bool empty();
};
void Stack::push(int val)
{
	// Get previous size of queue
	int s = q.size();

	// Push current element
	q.push(val);

	// Pop (or Dequeue) all previous
	// elements and put them after current
	// element
	for (int i=0; i<s; i++)
	{
		// this will add front element into
		// rear of queue
		q.push(q.front());

		// this will delete front element
		q.pop();
	}
}

// Removes the top element
void Stack::pop()
{
	if (q.empty())
		cout << "No elements\n";
	else
		cout<<q.front()<<endl;
		q.pop();
}

int main()
{
	system("color fc");
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.pop();	
	s.pop();
	s.pop();
	getch();
}

