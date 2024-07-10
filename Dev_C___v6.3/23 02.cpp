#include<stdio.h>
using namespace std;
int main(){
	int n, c=0, sum=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		sum+=a;
		if(a>0) c++;
		
	}
	printf("%d\n", c);
	printf("%0.2f", sum*1.0/n);
}