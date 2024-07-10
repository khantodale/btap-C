#include<stdio.h>
#include<math.h>
int main (){
	float a, b, c, d, e, f;
	float x, y, D, A, B;
	printf("Nhap cac he so cua he phuong trinh:");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	D = a * e - b * d;
	A = b * f - e * c;
	B = a * f - d * c;
	if (D != 0){
		x = A / D;
		y = B / D;
		printf("he phuong trinh co nghiem x = %0.2f&& y = %0.2f", x, y);
	}
	else {
	if ((A == B)&& (A == 0)){
		printf(" he pt co vo so nghiem");
	}
	else if (A != 0 || B != 0){
		printf ("he pt vo nghiem");
	} 
	
	}
	
}