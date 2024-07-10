#include<stdio.h>
#include<math.h>
int main(){
float a, b;
printf("Nhap a va b");
scanf("%f%f", &a,&b);
if(a == 0){
	if (b == 0){
		printf ("Pt co vo so nghiem");
	}
	else {
		printf("Pt vo nghiem");
	}
}
else {
	printf("Pt co nghiem duy nhat x = %0.2f", -b/a);
}
}