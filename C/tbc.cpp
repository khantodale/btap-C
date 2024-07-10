#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int a[n];
	int sum=0;
	int tmp=0;
	
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]>5 && a[i]%2==0){
			tmp++;
			sum += a[i] ;
		}
	}
	double average = sum * 1.0 / tmp ;
	printf("tbc: %0.2f", average);
}

