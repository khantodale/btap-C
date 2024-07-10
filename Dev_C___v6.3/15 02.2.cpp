#include<stdio.h>
typedef struct{
char ho[10];
char tendem[10];
char ten[10];

}hoten;
typedef struct{
	char xa[30];
	char huyen[30];
	char tinh[30];
}Quequan;
typedef struct{
	float toan;
	float ly;
	float hoa;
}Diemthi;
typedef struct{
	hoten t;
	Quequan qq;
	Diemthi d;
	char truong[50];
	int sbd[10];
}thongtinthisinh;
int main(){
	thongtinthisinh a[20];
	for(int i =0; i<= 20; i++){
	printf("Nhap ho va ten:");
	scanf("%s%s%s",&a[i].t.ho, &a[i].t.tendem, &a[i].t.ten);
	printf("Nhap truong: ");
	scanf("%s", &a[i].truong);
	printf("Nhap que quan:");
	scanf("%s%s%s", &a[i].qq.xa, &a[i].qq.huyen, &a[i].qq.tinh);
	printf("Nhap so bao danh: ");
	scanf("%s", &a[i].sbd);
	printf("Nhap diem thi 3 mon toan, ly, hoa: ");
	scanf("%f%f%f", &a[i].d.toan, &a[i].d.ly, &a[i].d.hoa);
	
}
for(int i =0; i<=20; i++){
	for(int j=0; j<=20; j++){
		if((a[i].d.toan + a[i].d.ly + a[i].d.hoa)<a[j].d.toan + a[j].d.ly + a[j].d.hoa){
			thongtinthisinh h = a[i];
			a[i]=a[j];
			a[j]= h;
		}
	}
}
for(int i=0; i<=20; i++){
		printf("Ho va ten: \n", a[i].t.ho, a[i].t.tendem, a[i].t.ten);
		printf("Truong: \n", a[i].truong);
		printf("Que quan: \n", a[i].qq.xa, a[i].qq.huyen, a[i].qq.tinh);
		printf("SBD: \n", a[i].sbd);
		printf("Diem thi 3 mon toan ly hoa: %0.2f, %0.2f, %0.2f", a[i].d.toan, a[i].d.ly, a[i].d.hoa);
	}
}


