#include<iostream>
#include<strings.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fstream>
using namespace std;
int binarySearch(int arr[], int start, int end, int x) {
  while (start <= end) 
  {
    int mid = (start+end)/ 2;
    if (arr[mid] == x) 
	{
      return mid;
    }
	 else if (x< arr[mid] ) 
	{
      end = mid - 1;
    } else 
	{
      start = mid + 1;
    }
  }
} 
 
main()
{
	system("color f3");
	int myarr[10];
  int num;
  int output;

  cout << "Please enter 10 elements ASCENDING order" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(myarr, 0, 9, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }
	getch();
}

