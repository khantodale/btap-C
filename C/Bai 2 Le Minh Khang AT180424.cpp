#include<stdio.h>
void tinh_mt_xoay(int a[100][100], int &n){
	int i;
	int sohang, socot;
	int vth, vtc;
	int d = 1;
	vth = vtc = 0;
	printf("Nhap cap cua ma tran(so duong): ");
	scanf("%d", &n);
	sohang = socot = n;
	while(d<=(n*n)){
	for(i = vtc; i<socot; i++){
		a[vth][i] = d;
		d++;
	}
	for(i = vth + 1;i < sohang ; i++){
		a[i][socot -1] = d;
		d++;
	}
	for(i = socot - 2; i>=vtc; i--){
		a[sohang-1][i] = d;
		d++;
	}
	for(i = sohang - 2;i>vth;i--){
		a[i][vtc] = d;
		d++;
	}
	vth++;
	vtc++;
	sohang--;
	socot--;
}
}
void in_mt_xoay(int a[100][100], int n){
	for(int i =0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void menu(){
	printf("\n1. Tinh ma tran xoay\n");
	printf("2. Hien thi ma tran xoay\n");
	printf("3. Ket thuc\n");
}
int main(){
	int m;
	int a[100][100];
	int n;
	while(n != 3){
		menu();
		scanf("%d", &n);
		if(n == 1){
			tinh_mt_xoay(a, m);
		}
		else if(n == 2){
			in_mt_xoay(a, m);
		}
	}
}