#include<stdio.h>
int main(){
float a, b, c;
printf("Nhap 3 canh:");
scanf("%f%f%f", &a, &b, &c);
if((a + b > c) && (a + c > b) && (b + c > a)){
	if ((a == b) && (a == c) ) {
		printf(" Day la 3 canh cua 1 tam giac deu");
	}
	else if ((a * a == b * b + c * c)|| (b * b == a * a + c * c)||(c * c == a * a + b * b)) {
		printf ("Day la 3 canh cua 1 tam giac vuong");
	}
	else if ((a == b)||(a == c)||(b == c)) {
		printf("Day la 3 canh cua 1 tam giac can");
	}
}
else { 
printf ("Day khong phai la 3 canh cua 1 tam giac");
}
}
	
