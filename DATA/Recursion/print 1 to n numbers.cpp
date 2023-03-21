/**********************************************
            alphabetacoder.com
 C program to print all natual numbers from 1 
 to n using recursion
*********************************************/

#include <iostream>
#include <conio.h>
using namespace std; // recursive function
void printUptoN(int n) {
    //condition for calling
    if (n > 1)
        printUptoN(n - 1);
    cout<<"|"<<n;
}
int main() {
    int n;
    //take input of the number upto which 
    // natural numbers will be printed
    cout<<"Enter the upper limit = ";
    cin>>n;

    cout<<"First |"<<n<<"| natural numbers are "<<endl;
    // call the recursive function to print
    // the natural numbers
    printUptoN(n);
	getch();
    return 0;
}
