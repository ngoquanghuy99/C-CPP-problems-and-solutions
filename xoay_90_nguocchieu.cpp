#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, mang[200][200], mang1[200][200];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &mang[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			mang1[i][j]=mang[j][n-i-1];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", mang1[i][j]);
		}
		printf("\n");
	}

	return 0;
}

