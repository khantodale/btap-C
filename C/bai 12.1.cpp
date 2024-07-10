#include<stdio.h>
int main(){
	int a[5], b[5], c[10];
	printf("Nhap cac phan tu cua a: ");
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
		c[i] = a[i]; 
	}
	
	printf("Nhap cac phan tu cua b: ");
	for(int i=0; i<5; i++){
		scanf("%d", &b[i]);
		c[i+5]=b[i];
	}
	for(int i =0; i<9; i++){
		for(int j=i+1; j<10;j++){
				if(c[i]>c[j]){
				int	tmp=c[i];
					c[i]=c[j];
					c[j]=tmp;
				}
		}
	}
	//printf("Cac phan tu cua c: %d\t");
//	for(int i=0; i<10; i++){
//	printf("%d\t", c[i]);
}

//	
//}