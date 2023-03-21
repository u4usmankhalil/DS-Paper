#include <bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Node{
	public:
		int Value;
		Node *Next;	
};
void printlist(Node *n){
	while(n!=NULL)
	{
//		cout << n.Value<<endl;
		cout << n->Value<<endl;
//		n=n.next;
		n=n->Next;
	}
}
void Delete(Node *&n,int val)
{
	if(n==NULL)
	{
		return;
	}
	if(n->Value==val)//deleting at head
	{
//		cout<<"da"<<endl;
		Node *todelete=n;
		n=n->Next;
		delete todelete;
		return;
	}
	int flag=0;
	Node *temp=n;
	while(temp->Next!=NULL)
	{
		if(temp->Next->Value==val)
		{
			flag=1;
			break;
		}
		temp=temp->Next; 
	}
	if(flag==0)
	{
		cout<<"Not Found\n";
	}
	else
	{
		Node *todelete=temp->Next;
		temp->Next=temp->Next->Next;
		delete todelete;
	}
	return;
}
main()
{
	Node *head=new Node();//agr () na lgao to no issue
	Node *second=new Node();
	Node *third=new Node();	
//	cin>>head->Value;
	head->Value=1;
	head->Next=second;
	second->Value=2;
	second->Next=third;
	third->Value=5;
	third->Next=NULL;
	printlist(head);
//	Delete(head,1);
//	printlist(head);
	Delete(head,5);
	cout<<"After Deletion\n";
	printlist(head);
	system("pause>0");
//	getch();
}
