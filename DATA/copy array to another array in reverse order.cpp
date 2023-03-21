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
	int s=5,a1[s]={1,2,3,4,5},a2[s];
	int j=s-1,i;
	for(i=0;i<s&&j>=0;i++)
	{
		a2[j]=a1[i];
		j--;
	}
	for(i=0;i<s;i++)
	{
		cout<<a2[i]<<"|";
	}
	cout<<endl;
	getch();
}

