#include<stdio.h>

int main(){
	int n, m, mang[100][100], mang2[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &mang[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			mang2[i][j]=mang[j][i];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", mang2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

