#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	float delta, x1, x2, x; 
	printf("Nhap he so cua phuong trinh bac 2:");
	scanf("%f%f%f", &a, &b, &c);
if (a == 0){
	if(b == 0&&c != 0){
	printf("phuong trinh vo nghiem");
	}
	else if(b == 0 && c == 0) {
	printf ("phuong trinh co vo so nghiem");
	}
	else {
		x = -c / b;
		printf("phuong trinh co nghiem x =%0.2f",x);
	}
}
else {
	delta = b * b - 4 * a * c;
	if(delta < 0) {
		printf("phuong trinh vo nghiem");
	}
	else if(delta == 0) {
		x = -b / 2 * a;
		printf("phuong trinh co nghiem kep: x = %o.2f", x);
	}
	else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("phuong trinh co nghiem x1 = %0.2f&&x2 = %0.2f", x1, x2);
	}
}

}

