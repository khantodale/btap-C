#include<stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int a[n];
	 a[0]=0;
	 a[1]=1;
	 a[2]=1;
	for(int i=3;i<=n;i++){
		a[i] = a[i-1] + a[i-2];
	}
	printf("%d", a[n]);
}