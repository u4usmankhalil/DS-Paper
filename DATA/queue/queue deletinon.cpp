#include <iostream>
#include<conio.h>
#include<queue>
using namespace std;
void remove(int t,queue <int > &q)
{
	 queue<int>raf;
	 int size1=q.size();
	 int cont =0;
	 while(q.front()!=t && !q.empty())
	 {
	 	raf.push(q.front());
	 	q.pop();
	 	cont++;
	 }
	 int size2=size1-cont-1;
	 cout<<"size2==="<<size2<<endl;
	 cout<<"remaining elements are ==-="<<size2<<endl;
	 cout<<"cont="<<cont<<endl;//q=2
	 if(q.empty())
	 {
		cout<<"Element does not exist in your queue---"<<endl;
		while(!raf.empty())
		{
			q.push(raf.front());
			raf.pop();
		}
	 }
	 else
	 {
	 	q.pop();
	 	while(!raf.empty())
	 	{
	 		q.push(raf.front());
	 		raf.pop();
		}
		 while(size2>0)
		 {
			int p=q.front();
			q.pop();
			q.push(p);
		 	size2--;
		 }
			cout<<"size2="<<size2<<endl;
	 }
}
void print(queue<int> qr)
{
    while (!qr.empty()) {
        cout << qr.front() << " ";
        qr.pop();
    }
    cout << endl;
}
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
//	print(q);
	remove(39, q);
	print(q);
	remove(20, q);
	print(q);
	q.pop();
	getch();
}
