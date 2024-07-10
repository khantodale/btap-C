#include<stdio.h>
void nhap_cd_cr(int &n, int &m){
	printf("Nhap kich thuoc hinh chu nhat: ");
	scanf("%d%d", &m, &n);
}
void ve_hcn_rong(int n, int m){
	for(int i = 0; i < m; i++){
		for(int j = 0; j< n; j++){
			if(i == 0|| i == m - 1|| j == 0|| j == n -1){
			printf("    *    ");
		}
		else
			printf("         ");
	}
		printf("\n");
	}
}
int main(){
	int n, m;
	nhap_cd_cr(n, m);
	ve_hcn_rong(n ,m);
	return 0;
}