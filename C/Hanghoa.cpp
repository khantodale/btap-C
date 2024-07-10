#include<stdio.h>
#include<malloc.h>
typedef struct{
	char tenhang[30];
	int dongia;
	int soluong;
	int thanhtien;
}hang;
typedef struct Node{
	hang data;
	struct Node *next;
	
}Node;
typedef struct{
	Node *head;
	Node *tail;
}list;
void init(list *l){
	l->head=NULL;
	l->tail=NULL;
	
}
Node *creat_node(hang x){
	Node *p;
	p=(Node*) malloc(sizeof(Node));
	if (p==NULL){
		printf("Loi cap phat");
		return NULL;
	}
	else {
		p->data=x;
		p->next=NULL;
		return p;
	}
}
void nhaphang(hang *h){
	printf("Nhap ten hang: ");
	gets(h->tenhang);
	printf("Nhap don gia: ");
	scanf("%d", &h->dongia);
	printf("Nhap so luong: ");
	scanf("%d", &h->soluong);
	h->thanhtien = h->dongia * h->soluong;
}
void insertlist(list *l, Node *p){
	if(l->tail==NULL){
		l->head = p;
		l->tail = p;
		
	}
	else {
		p->next=l->tail;
		l->tail = p;
	}
}
void display(list l){
	Node *p=l.tail;
	while(p!= NULL){
		printf("%s\t%d\t%d\t%d", p->data.tenhang, p->data.dongia, p->data.soluong, p->data.thanhtien);
	}
}

int main(){
	list l;
	hang h;
	nhaphang(&h);
	init(&l);
	Node *p=creat_node(h);
	insertlist(&l, p);
	display(l);
}