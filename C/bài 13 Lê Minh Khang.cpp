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
void chuyensang_coso2(stack *s){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	while(n!=0){
		int r = n % 2;
		node *p = khoitaonode(r);
		push(s, p);
		n = n / 2;
	}
}
void chuyensang_coso8(stack *s){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	while(n!=0){
		int r = n % 8;
		node *p = khoitaonode(r);
		push(s, p);
		n = n / 8;
	}
}
void chuyensang_coso16(stack *s){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	while(n!=0){
		int r = n % 16;
		node *p = khoitaonode(r);
		push (s, p);
		n = n / 16;
	}
}
void hienthi(stack s){
	node *q = s.top;
	while (q!=NULL){
		printf("%d", q->data);
		q = q->next;
		pop(&s);
	}
}
void hienthi_coso16(stack s){
	node *q = s.top;
	while (q!=NULL){
		if(q->data >= 10){
			printf("%c", (char)q->data + 65 - 10);
			q = q->next;
			pop(&s);
		}
		else {
			printf("%d", q->data);
			q = q->next;
			pop(&s);
		}
	}
}
void menu(){
	printf("\n1, chuyen sang co so 2");
	printf("\n2, chuyen sang co so 8\n");
	printf("3, chuyen sang co so 16\n");
}
int main(){
	stack s;
	init(&s);
		while(1!=0){
				menu();
		int nhap;
		scanf("%d", &nhap);
		if(nhap == 1){
			chuyensang_coso2(&s);
			hienthi(s);
		}
		else if(nhap == 2){
			chuyensang_coso8(&s);
			hienthi(s);
		}
		else if(nhap == 3){
			chuyensang_coso16(&s);
			hienthi_coso16(s);
		}
		else {
			printf("\nChi nhap tu 1 den 3");
		}
	}
}

