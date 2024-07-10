#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i =8; i<=n;i++){
		int dem = 0;
		for(int j = 2;j<=sqrt(i);j++){
			if(i % j == 0){
				if(i / j == j){
					dem++;
				}
				else {
					dem+=2;
					
				}
			}
		}
		if(dem == 2){
			cout << i << endl;
		}
	}
}
