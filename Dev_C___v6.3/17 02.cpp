#include<stdio.h>
struct Node{
	int data; 
	Node *pnext;
};
struct List{
	Node *pHead;
	Node *pTail;
};
typedef struct List list;
	
