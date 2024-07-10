#include<stdio.h>
void nhap_dayso_tangdan(int a[100], int &n){
	printf("Nhap so phan tu cua day so:");
	scanf("%d", &n);
	for(int i = 0; i<n;i++){
		scanf("%d", &a[i]);
	}
}
void ghep_2dayso(int a[100], int b[100], int c[100], int &n, int &m, int &p){
	int i, j, k;
	i = j = k = 0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			c[k] = a[i];
			k++;
			i++;
		}
		else {
			c[k] = b[j];
			k++;
			j++;
		}
	}
	while(i<n){
		c[k] = a[i];
		k++;
		i++;
	}
	while(j<m){
		c[k] = b[j];
		k++;
		j++;
	}
	p = k;
}
void indayso(int a[100], int n){
	for(int i = 0; i<n; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
void menu(){
	printf("\n1. Nhap 2 day so\n");
	printf("2. Ghep 2 day so\n");
	printf("3. In 3 day so\n");
	printf("4. Ket thuc\n");
}
int main(){
	int a[100], b[100], c[100];
	int n, m, p;
	int nhap;
	menu();
	scanf("%d", &nhap);
	while(nhap != 4){
		if(nhap == 1){
			nhap_dayso_tangdan(a, n);
			nhap_dayso_tangdan(b, m);
		}
		else if(nhap == 2){
			ghep_2dayso(a, b, c, n, m, p);
		}
		else if(nhap == 3){
			indayso(a, n);
			indayso(b, m);
			indayso(c, p);
		}
		menu();
		scanf("%d", &nhap);
		
	}
	
}
