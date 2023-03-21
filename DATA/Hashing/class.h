#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define max_size 100000
using namespace std;

struct node
{
    int data;
    struct node *next;
};

 class hashing{
 	node *linklist[max_size];
 	public:
 		hashing()
 		{
 			linklist[max_size]=NULL;//{NULL} is written by GR 
		}
		void init(int);
		void insert(int,int);
		void display(int);
		void AllinOne();
		void search(int);
		void delet(int);
 };


