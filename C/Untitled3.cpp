#include<stdio.h>
#include<stdlib.h>
void nhapmt(int x[100][100], int n, int m){
	printf("n ,m:");
	scanf("%d%d", &n, &m);
	for(int i = 0; i<n;i++){
		for(int j = 0;j<m;j++){
			printf("x[%d][%d]:", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmt(int x[100][100], int n, int m){
	for(int i = 0; i<n;i++){
		for(int j=0; j<m;j++){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
}
void cong2mt(int a[100][100], int b[100][100], int c[100][100], int n, int m){
	for(int i = 0; i<n;i++){
		for(int j=0; j<m;j++){
			c[i][j]=a[i][j] + b[i][j];
		}
	}
}
void nhapfile(int a[100][100], int &n, int &m, char tenfile[50]){
	FILE *f;
	f = fopen(tenfile, "r");
	if(f==NULL){
		printf("\nLoi mo file");
		return;
	}
	fscanf(f, "%d%d", &n, &m);
	printf("%d%d", n, m);
	for(int i =0;i<n;i++){
		for(int j = 0; j<m; j++){
			fscanf(f, "%d", &a[i][j]);
		}
	}
}
void xuatfile(int a[100][100], int n, int m, char tenfile[50]){
	FILE *f;
	f = fopen(tenfile, "w");
	fprintf(f, "n ,m :%d%d", n, m);
		for(int i = 0; i<n;i++){
		for(int j=0; j<m;j++){
		printf("%d\t", a[i][j]);
		}
			printf("\n");
		}
}
void xuatfile_matrantong(int a[100][100], int b[100][100], int c[100][100], int n, int m, char tenfile[50]){
	for(int i=0; i<n;i++){
		for(int j =0; j<m;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	FILE *f;
	f = fopen(tenfile, "w");
	printf("Ma tran C:\n");
		for(int i = 0; i<n;i++){
		for(int j=0; j<m;j++){
		printf("%d\t", c[i][j]);
		}
			printf("\n");
		}
}
int main(){
	int n, m;
	int a[100][100], b[100][100], c[100][100];
	char *f;
	f = "MA_TRAN.C";
	xuatfile(a, n, m, f);
	xuatfile(b, n, m, f);
	xuatfile_matrantong(a, b, c, n, m, f);

}