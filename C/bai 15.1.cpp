#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int p=1;
	printf("Nhap n:");
	scanf("%d", &n);
	for (int i =0;i<n; i++){
		int t;
		scanf("%d", &t);
		if(t<0){
			p=p*t;
		}
	}
	
	printf("Tich cac so am: %d", *p);
}
	