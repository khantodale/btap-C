#include<stdio.h>
void Nhapmatran(int &x[100][100], int m, int n){
	printf("Nhap so hang, so cot: ");
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("x[%d][%d]=", i,j);
			scanf("%d", &x[i][j]);
		}
	}
}
void Xuatmatran(int x[100][100], int m, int n){
	for(int i=0; i<m;i++){
	for(int j=0; j<n;j++){
	printf("%d\t", x[i][j]);
	}
	printf("\n");
	}
}
void tichmatran(int a[100][100], int b[100][100],int &c[100][100], int m, int n, int p){
	for(int i=0; i<m;i++){
		for(int j=0;j<p;j++){
			c[i][j]=0;
			for(int l=0; l<n;l++){
				
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
}

int main(){
int a[100][100], b[100][100], c[100][100];
int m, n, p;
printf("Nhap ma tran A: ");
Nhapmatran(a,n,m);
printf("Nhap ma tran B: ");
Nhapmatran(b,m,p);
tichmatran(a,b,c,n,m,p);
printf("Ma tran A:\n");
Xuatmatran(a,n,m);
printf("Ma tran B:\n");
Xuatmatran(a,m,p);
printf("Ma tran C:\n");
Xuatmatran(a,n,p);
	
}