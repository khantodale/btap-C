#include<stdio.h>
int main(){
	int a[100];
	int n;
	int tmp=0;
	int X;
	scanf("%d", &n);
		printf("Nhap X:");
	scanf("%d", &X);
	for(int i =0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i] == X){
			tmp++;
		}
	}
	if(tmp!=0){
		printf("X co xuat hien\nX xuat hien so lan: %d", tmp);
	}
	else{
		printf("X khong nam trong day");
	}
}
