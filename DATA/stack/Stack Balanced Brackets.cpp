// C++ program to check for balanced brackets.
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
bool Brackets(string expr)
{
	stack <char> s;
	for (int i = 0; i < expr.length(); i++) {
		if (s.empty()) //empty ha to push krna ha
		{
			s.push(expr[i]);
		}
		else if ((s.top() == '(' && expr[i] == ')')
				|| (s.top() == '{' && expr[i] == '}')
				|| (s.top() == '[' && expr[i] == ']')) 
		{
			// If we found any complete pair of bracket
			// then pop
			s.pop();
		}
		else // agr else if true nahi aur empty bhi nahi to else krky push krna ha
		 {
			s.push(expr[i]);
		}
	}
	if (s.empty()) {
		
		// If stack is empty return true,,mtlb ky agr sari values check hony
		// ky bad stack me koi opening or closing bracket(s)nahi ha to return true else false
		return true;
	}
	else//khud sy likha ha agr koi error ho to usman  remove kr dena
	return false;
}
int main()
{
//({[]})	string expr = "{()}[]";
	char str[100];
	cout<<"Enter Brackets==>";
	cin.getline(str,100);
	// Function call
	if (Brackets(str))
		cout << "Brackets are Balanced...";
	else
		cout << "Brackets are Not Balanced...";
	getch();
}
