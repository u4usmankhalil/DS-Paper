#include<iostream>
#include<conio.h>
#include<string>
#include<stack>
using namespace std;
struct stak{
	private:
	stack <char> st;
	int i;
	public:
	string	Duplicates(string str);
};
string stak::Duplicates(string str)
{
	for(i=0;i<str.length();i++)
	{
		if(st.empty() || str[i]!=st.top())
		{
			st.push(str[i]);
		}
		else
		{
			st.pop();
		}
	}
	if(st.empty())
	{
		cout<<"Empty String..."<<endl;
	}
	else
	{
		string add;// to Return
		while(!st.empty())
		{
			add=st.top()+add;//for reversing duplicate string add=add+st.top();
			st.pop();
		}
		return add;
	}
}

int main()
{
	stak s1;
	char str1[100];
	cout<<"-----------------"<<endl;
	cout<<"Enter the string"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"to CHECK"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Adjacent Duplicates"<<endl;
	cout<<"-----------------"<<endl;
	cin.getline(str1,100);
	cout<<s1.Duplicates(str1);
	getch();
}
