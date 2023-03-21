#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX 10
class Hash
{
 private:
  int a[MAX];
 public:
 Hash();
 int create(int);
 void quadratic_prob(int,int),display();
 void search();
 void delet();
};
Hash::Hash()
{
 int i;
 for(i=0;i<MAX;i++)
  a[i]=-1;
}
int Hash::create(int num)
{
 int key;
key=((2*num)+3)%MAX;
 return key;
}
void Hash::quadratic_prob(int key,int num)
{
	int prob=1;
 if(a[key]==-1)
 {
 a[key]=num;
 }
 else
{
// 	here key is my location 
	int location,i=0;	
	while(i<MAX)
	{
		prob++;
//		cout<<"tahir"<<endl;
	location=(key+i*i)%MAX;	
	if(a[location]==-1)
	{
//		cout<<"tahir"<<endl;
		a[location]=num;
		break;
	}
	i++;
	if(i>MAX-1 || location>MAX-1)
	{
		cout<<"sorry this value cannot be inserted,out of size or location"<<endl;
		break;
	}
	}
}
cout<<"Number of probs are:"<<prob<<endl;
 
}
void Hash::display()

{
 int i;
 cout<<"\n The Hash Table is..."<<endl;
 for(i=0;i<MAX;i++)
  cout<<"\n  "<<i<<"  "<<a[i];
}
void Hash::search()
{
	int v;
	cout<<"Enter a value to search:";cin>>v;
	 int i;
 for(i=0;i<MAX;i++)
  {
  	if(v==a[i])
	{
  	cout<<"\n  value found=="<<a[i]<<endl;
  	break;
	}
  }
}
void Hash::delet()
{
	int v;
  	Hash h;
	cout<<"Enter a value to delete:";cin>>v;
	 int i;
 for(i=0;i<MAX;i++)
  {
  	if(v==a[i])
	{
  	cout<<"\n  value found "<<a[i]<<endl;
  	a[i]=-1;
//  	int nw;
//  	cout<<"Enter new value:";cin>>nw;//	  usman here
//  	int key=h.create(nw);
//  	h.quadratic_prob(key,nw);
  	break;
	}
  }
}
main()
{
 int num,key;
 char ans;
 Hash h;
 cout<<"\nCollision Handling By Quadratic Probing";
 do
 {
  cout<<"\n Enter The Number";
  cin>>num;
  key=h.create(num);//returns hash key
  h.quadratic_prob(key,num);//collision handled by linear probing
  cout<<"\n Continue???????:::(y/n)";
  ans=getche();
  string ch;
  cout<<"Enter 1 for search 2 for delet";cin>>ch;
  if(ch=="1")
  {
  	h.search();
  }
  else if(ch=="2")
  {
  	cout<<"USMan"<<endl;
	h.display();
  	h.delet();
  }
  ch="NULL";
 }while(ans=='y');
 h.display();//displays hash table
 getch();
}
