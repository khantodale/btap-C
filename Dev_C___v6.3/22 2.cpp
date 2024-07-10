#include<stdio.h>
#include<malloc.h>
typedef struct{
    char masv[10], ten[20],lop[10];
    int tuoi;
    float diem;
}Sinhvien;
typedef struct Node{
    Sinhvien sv;
    Node *next;
}Node;
typedef struct{
    Node *head;
    Node *tail;
}List;
void init(List *l){
    l->head=NULL;
    l->tail=NULL;
}
Node* getNode(Sinhvien s){
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL){
        printf("cap phat loi");
        return NULL;
    }
    else{
        p->sv=s;
        p->next=NULL;
        return p;
    }
}
void nhap(Sinhvien *s){
    printf("Nhap ma sinh vien:");
    fflush(stdin);
    gets(s->masv);
    printf("Nhap ten sinh vien:");
    gets(s->ten);
    printf("Nhap lop sinh vien:");
    gets(s->lop);
    printf("Nhap tuoi sinh vien:");
    scanf("%d", &s->tuoi);
    printf("Nhap diem sinh vien:");
    scanf("%f", &s->diem);
}
void xuat(Sinhvien s){
    printf("%s\t%s\t%s\t%d\t%f\n", s.masv, s.ten, s.lop, s.tuoi, s.diem);
}
void insert_head(List *l, Node *p){
    if(l->head==NULL){
        l->head=p;
        l->tail=p;
    }
    else{
        p->next=l->head->next;
        l->head=p;
    }
}
void remove(List *&l, char ten){
	Node *pDel=l->head;
	if(pDel==NULL){
		printf("Danh sach rong");
	}
	else {
		Node *pPre==NULL;
		while(pDel!=NULL){
			Sinhvien *sv=pDel->sv;
			if(sv->ten==ten){
				pPre=pDel;
				pDel=pDel->next;
			}
		}
		if(pDel==NULL){
			printf("Khong tim thay ten", ten);
		}
		else {
			if(pDel==l->head){
				l->head=l->head->next;
				pDel->next=NULL;
				delete pDel;
				pDel=NULL;
			}
		}
	}
}
int main(){
    List l;
    Sinhvien sv;
    init(&l);
    for(int i=0; i<2; i++){
        nhap(&sv);
        insert_head(&l, getNode(sv));
    }
    printf("Danh sach sinh vien:");
    Node *p=l.head;
    while(p!=NULL){
        xuat(p->sv);
        p=p->next;
    }
    }
}