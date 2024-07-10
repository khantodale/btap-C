#include<stdio.h>
int main (){
	float a, b, c, d, e, f;
	float A, D, B;
	float x, y;
	printf("Nhap cac he so cua phuong trinh:");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	D = a * e - b * d;
	A = b * f - e * c;
	B = a * f - d * c;
	if(D!=0){
		x = - A / D;
		y = B / D;
		printf("He phuong trinh co nghiem x = %0.2f, y = %0.2f", x, y);
	}
	else {
		if(A == B && A == 0){
			printf("he phuong trinh co vo so nghiem");
		}
		else if(A != 0 && B!=0){
			printf("He phuong trinh vo nghiem");
		}
		
	}
}