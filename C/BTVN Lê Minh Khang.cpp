#include<stdio.h>
#include<math.h>
void nhapmatran(int a[][100], int dong, int cot){
	for(int i =0; i < dong;i++ ){
		for(int j = 0;j < cot; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
	void xuatmatran (int a[][100], int dong, int cot){
		for(int i = 0; i < dong; i++){
			for (int j = 0; j< cot; j++)
		printf("%d\t", a[i][j]);
	}
	printf("\n");
}
void tichhaimatran (int mt1[][100], int mt2[][100], int mt3[][100], int m, int n, int p){
for(int i = 0; i < m; i++){
			for (int j = 0; j< n; j++){
			 mt3[i][j] = 0;
				for(p>0; p<n; p++){
					mt3[i][j] += mt1[i][p] * mt2[p][j];
				}
			}

}
	
}
int main(){
	int mtA[40][100], mtB[40][100], mtC[40][100], m, n, p;
	printf("nhap m, n, p");
	scanf("%d%d%d", &n,&m,&p);
	printf("Nhap mtA: \n");
	nhapmatran(mtA, m, n);
	printf("Nhap mtB: \n");
	nhapmatran(mtB, m, n);
	tichhaimatran(mtA, mtB, mtC, m, n, p);
	xuatmatran(mtA , m, n);
	xuatmatran(mtB, n, p);
	xuatmatran(mtC, m, p);
}
