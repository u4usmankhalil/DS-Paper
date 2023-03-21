#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define max_size 100000
using namespace std;
void hashing::display(int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        struct node *temp = linklist[i];
        cout<<"\t\t\t\tlinklist["<<i<<"]-->";
        while(temp!=NULL)
        {
        	cout<<temp->data<< "-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

void hashing::init(int n)
{
    int i;
    for(i = 0; i < n; i++)
        linklist[i] = NULL;
}

void hashing::insert(int value,int n)
{
    //create a newnode with value
    struct node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
//    int key = value % n;
//int key=((2*value)+3)%n;//
int key=((3*value)+1)%n;//

    //check if linklist[key] is empty
    if(linklist[key] == NULL)
        linklist[key] = newNode;
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = linklist[key];
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}
void hashing::AllinOne()
{
	hashing c1;
	int i,m,n;
	cout<<"\t\t\t\tEnter SiZe for you want to INSERT values:";
	cin>>n;
    c1.init(n);
	for(i=1;i<=n;i++)
	{
		cout<<"\t\t\t\tEnter a value for "<<i<<"-time:";
		cin>>m;
		c1.insert(m,n);
	c1.display(n);	
	}
	c1.display(n);	
	c1.search(n);cout<<endl<<endl;
	c1.display(n);
	c1.delet(n);
}
void hashing::search(int n) 
{
	int value;
	cout<<"\t\t\t\tEnter a Value to Search:";cin>>value;
// 	int key = value % n;
//	int key=((2*value)+3)%n;
	int key=((3*value)+1)%n;
    node *temp = linklist[key];
    while(temp!=NULL)
    {
        if(temp->data == value)
        	{
		   		cout<<"\t\t\t\tYour Searched Value|"<<value<<"| Found="<<temp->data<<endl<<endl;
				   return;
			}
        temp = temp->next;
    }
    cout<<"\t\t\t\tYour Searched value |'"<<value<<"'| Not Found\n"<<endl;
}
void hashing::delet(int n){
	int value;
	cout<<"\t\t\t\tEnter a value to delete:";cin>>value;
//	int key=(2*value+3)%n;
	int key=(3*value+1)%n;
//	int key=value%n;

	node *temp=linklist[key],*del;
	if(temp!=NULL)
	{//checking in hashing
		if(temp->data==value)
		{
		del=temp;
		temp=temp->next;
		free(del);
		cout<<"\t\t\t\t|"<<value<<"| Deleted!Done!!!\n "<<endl;
		return;			
		}
		else
		{
			//checking in linklist
			while(temp->next!=NULL)
			{
				if(temp->next->data==value)
				{
					del=temp->next;
					temp->next=temp->next->next;
					free(del);
					cout<<"\t\t\t\t|"<<value<<"| Deleted!Done!!!\n "<<endl;
					return;					
				}
				temp=temp->next;
			}	
	}
		cout<<"\t\t\t\tYour Searched Value |"<<value<<"| Not Found\n\n";
}
