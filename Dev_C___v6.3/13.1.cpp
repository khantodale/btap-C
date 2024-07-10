#include<stdio.h>
int main(){
	int n, a[100], b[100], c[100];
	printf("Nhap so luong phan tu n: ");
	scanf("%d", &n);
	for(int i =0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]>0){
			b[i]=a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]<0){
			a[i]=b[i];
		}
	}
	printf("Cac phan tu cua b:");
	for(int i=0; i<n; i++){
		printf("%d", b[i]);
	}
}