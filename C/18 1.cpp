#include<stdio.h>
#include<math.h>
int main(){
	int a[100];
	int i, n, j;
	printf("Nhap vao 1 day so ");
	scanf("%d", &n);
	for(i = 0; i<n; i++){
	scanf("%d", &a[i]);
}
printf("day so duong:");
for ( j = 0; j < n; j++){
	if (a[j]>0){
		printf("%d\t", &a[j]);
	}
	printf("\nday so am:");
	for ( j = 0; j <= n; j++){
		if(a[j]<0){
		
		printf("%d\t", &a[j]);
	}
	}
}
	
}