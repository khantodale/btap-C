#include<stdio.h>
long int fact(int n){
	if(n == 0){
		return 0;
	}
	else {
		return n+fact(n-1);
	}
}
int main(){
	int a = 5;
	printf("tong tu 1 den %d la %ld", a, fact(a));
}