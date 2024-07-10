#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct{
	char hoten[30];
	int tuoi;
	float diemtb;
}sinhvien;
typedef struct Node{
	sinhvien data;
	struct Node *next;
}node;
typedef struct {
	node *head;
	node *tail;
}list;
void init(list *l){
		l->head = l->tail = NULL;
}
sinhvien create_sinhvien(){
	sinhvien sv;
	printf("Nhap ho ten:");
	fflush(stdin);
	gets(sv.hoten);
	printf("Nhap tuoi:");
	scanf("%d", &sv.tuoi);
	printf("Nhap diem tb:");
	scanf("%f", &sv.diemtb);
	return sv;
}
node *getNode(sinhvien sv){
	node *p = (node *) malloc(sizeof(node));
	if(p == NULL){
		printf("Loi cap phat");
		return NULL;
	}
	else {
		p->data = sv;
		p->next = NULL;
		return NULL;
	}
}
void insert_sinhvien(list *l, node *p){
	if(l->head == NULL){
		l->head = p;
		 l->tail = p;
	}
	else {
		l->tail->next = p;
		p = l->tail;
	}
}
void tao_danhsach(list *l){
	int tiep;
	do{
		insert_sinhvien(l, getNode(create_sinhvien()));
		printf("Neu muon nhap tiep vui long an phim 1\n");
		scanf("%d", &tiep);
	}while(tiep == 1);
}
void hienthi_danhsach(list *l){
	int stt =1;
	printf("\t\t\tDANH SACH SINH VIEN\n");
	printf("%4s \t %25s \t %15s \t %15s", "STT", "Ho ten", "Tuoi", "Diem tb");
	node *t = l->head;
	while(t != NULL){
		printf("%4s \t %25s \t %15d \t %15.2f", stt++, t->data.hoten, t->data.tuoi, t->data.diemtb);
		t = t->next;
	}
}
node* find_SinhVien(list *l)
{
    char name[25];
    printf("\nNhap ten sinh vien can tim: ");
    fflush(stdin);
    gets(name);
    node *t = l->head;
    while(t != NULL)
    {
        if(stricmp(t->data.hoten, name) == 0)
            return t;
        t = t->next;
    }
    return NULL;
}
void sua_sinhvien(list *l)
{
    node *t = find_SinhVien(l);
    if(t == NULL)
        printf("\nSinh vien vua nhap khong ton tai\n");
    else
        t->data = create_sinhvien();
}
void xoa_sinhvien(list *l){
    printf("Nhap so thu tu sinh vien can xoa: ");
    int i;
    scanf("%d", &i);
    node *t = l->head;
    if(i == 1){
        l->head = l->head->next;
    } else {
        for(int j = 0; j < i - 2; j++)
        {
            t = t->next;
        }
        t->next = t->next->next;
    }
}
void addmid(list *l){
	char name[30];
	printf("Nhap ten sinh vien can them vao sau:");
	fflush(stdin);
	gets(name);
	node *t = l->head;
	sinhvien sv;
	while(t != NULL){
		if(stricmp(t->data.hoten, name) == 0){
			insert_sinhvien(l, getNode(create_sinhvien()));
			break;
		}
		t = t->next;
	}
}
void menu()
{
    printf("\n\n\t\t MENU\n\n");
    printf("1, Tao danh sach sinh vien\n");
    printf("2, Hien thi danh sach\n");
    printf("3, Chen them 1 sinh vien vao sau sinh vien nao do\n");
    printf("4, Xoa 1 sinh vien\n");
    printf("5, Sua 1 sinh vien\n");
}
int main(){
	list l;
	init(&l);
	while(1!=0){
		menu();
		int nhap;
		scanf("%d", &nhap);
		if(nhap == 1)
		tao_danhsach(&l);
		else if(nhap == 2)
		hienthi_danhsach(&l);
		else if(nhap == 3)
		addmid(&l);
		else if(nhap == 4)
		xoa_sinhvien(&l);
		else if(nhap == 5)
		sua_sinhvien(&l);
		else 
		printf("\nChi nhap tu 1 den 5:");
	}
	
}