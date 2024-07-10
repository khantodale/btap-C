#include<stdio.h>
int main(){
	int n; 
	int i;
	int sohang, socot;
	int vth, vtc;
	vth = vtc  =0;
	int d;
	d = 1;
	printf("Nhap cap ma tran:");
	scanf("%d", &n);
	sohang = socot = n;
	while(d<=(n*n)){
		for(i = vtc; i<socot; i++){
			a[vth][i] = d;
			d++;
		}
		for(i = vth+1;i<=sohang - 1;i++){
			a[i][socot-1] = d;
			d++;
		}
		for(i = socot-2;i>=vtc;i--){
			a[sohang-1][i] = d;
			d++;
		}
		for(i = sohang -2; i>=vth;i--){
			a[i][vtc] = d;
			d++;
		}
		vth++;
		vtc++;
		sohang--;
		socot--;
	}
	for(int i =0; i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%d\t", a[i][j]);	
		}
		printf("\n");
	}
}