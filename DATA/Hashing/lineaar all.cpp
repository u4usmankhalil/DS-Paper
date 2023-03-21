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
 void linear_prob(int,int),display();
};
Hash::Hash()
{
 int i;
 for(i=0;i<MAX;i++)
  {a[i]=-1;}
}
int Hash::create(int num)
{

 int key;
 key=((2*num)+3)%10;
 return key;
}
void Hash::linear_prob(int key,int num)
{
	int prob=1,i;
	if(a[key]==-1)//if the location indicated by hash key is empty
	{
		a[key]=num;//place the number in the hash tabl
    	cout<<"Number of probs for "<<num<<" are:"<<prob<<endl;
    	return;
	}
	else
	{
	for(i=key+1;i<MAX;i++)//moving linearly down
	{
		if(a[i]==-1)    // searching for empty location
		{
			a[i]=num;  //placing the number at empty location
			cout<<"Number of probs for "<<num<<" are:"<<prob<<endl;
  			return;
 		}
 	prob++;
 	}
//From key position to the end of array we have searched empty location
//and now we want to check empty location in the upper part of the array
	for(i=0;i<key;i++)//array from 0th to keyth loaction will be scanned
	{
 		if(a[i]==-1)
		{
			a[i]=num;
  			cout<<"Number of probs for "<<num<<" are:"<<prob<<endl;
  			break;
 		}
	prob++;
	}
 } //outer else
}//end
void Hash::display()

{

 int i;

 cout<<"\n The Hash Table is..."<<endl;

 for(i=0;i<MAX;i++)

  cout<<"\n  "<<i<<"  "<<a[i];

}
main()

{

 int num,key;

 char ans;

 Hash h;


 cout<<"\nCollision Handling By Linear Probing";
int i=0;
 do
 {
  cout<<"\n Enter the Number";
  cin>>num;
  if(i==MAX)
  {
	cout<<"\nHash Table Is Full Hence "<<num<<" Can not Be Inserted\n";
  	break;
  }
  key=h.create(num);//returns hash key
  h.linear_prob(key,num);//collision handled by linear probing
  cout<<"\n Wish To Continue?(y/n)";
  ans=getche();
i++;
 }while(ans=='y');

 h.display();//displays hash table
 getch();
}
