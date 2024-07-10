#include<stdio.h>
#include<math.h>
int main(){
	int  n;
	printf("Nhap so nguyen duong:");
	scanf("%d", &n);
	if (n==0){
		printf("so nhi phan: 0");
		return 0;
	}
	int a[100];
	int d = 0;
	while(n!=0){
		a[d]=n%2;
		d++;
		n=n/2;
		
	}
	printf("Dang nhi phan:");
	for(int i = d-1;i>=0;i--){
		printf("%d", &a[d]);
	}
}