#include<stdio.h>
int main(){
	int a[100];
	int b[100];
	int c[100];
	int i;
	int j;
	int k;
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	i = j = k = 0;
	while ((i<n) && (j<n)){
		if(a[i]<=b[j]){
			c[k]=a[i];
			k++;
			i++;
		}
	
		else{
			c[k]=b[j];
			k++;
			j++;
		}	
	}
	while(i<n){
			c[k] = a[i];
			k++;
			i++;
		}
		while(j<n){
			c[k] = b[j];
			k++;
			j++;
		}
	printf("Cac phan tu cua c:");
	for(int p=0; p<k; p++){
	printf("%d\t", c[p]);
	}

	}
		