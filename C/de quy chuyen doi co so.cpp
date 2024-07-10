#include<stdio.h>
#include<malloc.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;
typedef struct stack{
	node *top;
}stack;
void init(stack *s){
	s->top = NULL;
}
node *khoitaonode(int x){
	node *p = (node *) malloc(sizeof(node));
	p->next = NULL;
	p->data = x;
	return p;
}
void push (stack *s, node *p){
	if(s->top == NULL){
		s->top = p;
	}
	else {
		p->next = s->top;
		s->top = p;
	}
}
int pop(stack *s){
	if(s->top!= NULL){
		node *p = s->top;
		int x = p->data;
		s->top = s->top->next;
		free(p);
		return x;
	}
	else {
		return 0;
		
	}
}
int main(){
	stack s;
	init(&s);
	printf("Nhap n:");
	int n;
	scanf("%d", &n);
	while (n!=0){
		int r = n%2;
		node *p = khoitaonode(r);
		push(&s, p);
		n = n/2;
	}
	node *q = s.top;
	while(q!=NULL){
		printf("%d", q->data);
		q = q->next;
	}
}