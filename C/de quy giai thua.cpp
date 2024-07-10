#include<stdio.h>
long int fact(int n){
	if(n==0){
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}
int main(){
	int a = 5;
	printf("giai thua cua %d la %ld", a, fact(a));
}