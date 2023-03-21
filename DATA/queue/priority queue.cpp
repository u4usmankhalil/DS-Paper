#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<queue>
using namespace std;
main()
{
//	sleep(2);
	system("color f3");
	 int s=6,arr[s] = { 10, 2, 4, 8, 6, 9 }; 
    // defining priority queue
    priority_queue<int> pq; 
    // printing array
    cout << "Array: ";
    for (int i=0;i<6;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        pq.push(arr[i]);
    }
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
	getch();
}

