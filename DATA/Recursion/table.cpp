// C++ program to print table
// of a number using recursion
#include <iostream>
using namespace std;

// Function that print the
// table of a given number
// using recursion
void mul_table(int N, int i)
{
	// Base Case
	if (i > 10)
		return;

	// Print the table for
	// current iteration
	cout << N << " * " << i
		<< " = " << N * i
		<< endl;

	// Recursive call to next
	// iteration
	return mul_table(N,i+1);
}
// Driver Code
int main()
{
	// Input number whose table
	// is to print
	int N;
    cout<<"Enter the Number";
    cin>>N;

	// Function call to print
	// the table
	mul_table(N, 1);
	return 0;
}

