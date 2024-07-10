#include<stdio.h>
#include<malloc.h>
typedef struct {
	char hoten[30];
	int tuoi;
	float diemtb;
}sinhvien;
typedef struct Node{
	sinhvien data;
	Node *next;
}Node;
typedef struct{
	Node *head;
	Node *tail;
}list;
void init(list *l){
	l->head = NULL;
    l->tail = NULL;
}
Node *creat_node(sinhvien x){
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
void nhapsv(sinhvien *sv){
	printf("Nhap ten: ");
	gets(sv->hoten);
	printf("Nhap tuoi: ");
	scanf("%d", &sv->tuoi);
	printf("Nhap diem trung binh: ");
	scanf("%f", &sv->diemtb);
}
void insertlist(list *l, Node *p){
	if(l->tail = NULL){
		l->head = p;
		l->tail = p;
	}
	else {
		p->next = l->tail;
		l->tail = p;
	}
}
void display(list l){
	Node *p=l.tail;
	while(p!= NULL){
	printf("%30s\t%5d\t%5f", &p->data.hoten, &p->data.tuoi, &p->data.diemtb);
}
}
void display_dtbgiamdan(list l){
	Node *p=l.tail;
	while(p!=NULL){
		if(p->data.diemtb>7){
			printf("%30s\t%5d\t%5f", &p->data.hoten, &p->data.tuoi, &p->data.diemtb);
		}
	}
}
void sapxepdanhsachtheodiemtb(list l){
	Node *p=l.tail;
	Node *q=p->next;
	while(p!=NULL){
		if(p->data.diemtb<=q->data.diemtb){
			q = p;
			p = p->next;
		}
		printf("%30s\t%5d\t%5f", &p->data.hoten, &p->data.tuoi, &p->data.diemtb);
	}
}
int main() {
	list l;
	sinhvien sv;
	nhapsv(&sv);
	init(&l);
	Node *p=creat_node(sv);
	insertlist(&l, p);
	display(l);
	//display_dtbgiamdan(l);
	//sapxepdanhsachtheodiemtb(l);
}