#include<stdio.h>
int main(){
	char i ;
	do{
		printf("dep trai\n");
		fflush(stdin);
		scanf("%c", &i);
		if (i=='c'){
		break;
		}
	} while (true);
}