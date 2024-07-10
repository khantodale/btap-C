#include<stdio.h>
#include<malloc.h>
typedef struct {
	char tenhang[30];
	int dongia;
	int soluong;
	int thanhtien;
}hang;
typedef struct Node{
	hang data;
	struct Node *next;
}Node;
typedef struct {
	Node *head;
	Node *tail;
}list;
void init(list *l){
	l->head = NULL;
	l->tail = NULL;
}
Node *getnode(hang x){
	Node *p;
	p = (Node*)malloc(sizeof(Node));
	if(p==NULL){
		printf("Loi cap phat");
		return NULL;
	}
	else{
		p->data=x;
		p->next=p;
		return p;
	}
}
void nhaphang(hang *hh){
	printf("Nhap ten hang:");
	fflush(stdin);
	gets(hh->tenhang);
	printf("Nhap don gia:");
	scanf("%d", &hh->dongia);
	printf("Nhap so luong:");
	scanf("%d", &hh->soluong);
	hh->thanhtien = hh->dongia * hh->soluong;
}
void xuat(hang hh){
	printf("%30s\t%5d\t%5d\t%5d\n", hh.tenhang, hh.dongia, hh.soluong, hh.thanhtien);
}
void insert_list(list *l, Node *p){
	if(l->tail==NULL){
		l->tail = l->head = NULL;
	}
	else{
		p->next = l->tail;
		l->tail = p;
	}
	
}
//void display(list l){
//	printf("\t\t SO LIEU HANG HOA\n");
//	printf("%4s\t%20s\t%20s\t%20s\t%20s", "STT", "Ten hang", "Don gia", "So luong", "Thanh tien");
//	int i=0;
//	for(Node *k = l.tail; k !=NULL; k = l.tail->next){
//		printf("%4d", i++);
//		xuat(k->data);
//	}
//}

int main(){
	list l;
	hang hh;
	nhaphang(&hh);
	init(&l);
	Node *p = getnode(hh);
	insert_list(&l, p);
	display(l);
}