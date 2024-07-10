#include<stdio.h>
typedef struct {
	int x, y;
}Diem;
int main(){
	Diem d[30];
	for ( int i = 0; i < 3; i++){
		scanf("%d%d", &d[i].x, &d[i].y);
	}
	for(int j = 0; j < 3; j++){
		printf("(%d, %d)", d[j].x, d[j].y);
	}
	
}