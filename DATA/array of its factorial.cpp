#include<iostream>
#include<strings.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fstream>
using namespace std;
main()
{
	system("color f3");
	int j,val,s=5,a[s]={3,2,1,4,5},i;
	for(i=0;i<s;i++)
	{
		cout<<"Enter a number:";cin>>a[i];
	}
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<"|";
	}
	cout<<endl;
	for(i=0;i<s;i++)
	{
		int val=a[i];j=val-1;
		while(j>0)
		{
			val=val*j;
			j--;
		}
		a[i]=val;
//		cout<<"Val="<<val<<endl;
	}
	cout<<endl;
	cout<<"Array with its factorized index number is as follows\n";
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<"|";
	}
	cout<<endl;
	getch();
}

