#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int a[n];
	int tmp1 = 0;
	int tmp2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0;i<n;i++){
		scanf("%d", &a[i]);
	if(a[i]>0){
		tmp1++;
		sum1 += a[i];
	}
	if(a[i]<0){
		tmp2++;
		sum2 += a[i];
	}
	}
	int sum = sum1 + sum2;
	double tbc1 = sum1 * 1.0 / tmp1;
	double tbc2 = sum2 * 1.0 / tmp2;
	double tbc = sum * 1.0 / n;
	printf("Trung binh cong day so duong: %0.1f\n", tbc1);
	printf("Trung binh cong day so am: %0.1f\n", tbc2);
	printf("Trung binh cong day so : %0.1f", tbc);
	}