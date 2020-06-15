#include<stdio.h>
#include<math.h>

int main(){
	int n, gt, d, cot, hang, a[50][50];
	scanf("%d", &n);
	d = 0, gt = n*n, hang = n - 1; cot = n - 1;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) a[d][i] = gt--;
		for(int i=d+1; i<=hang; i++) a[i][cot] = gt--;
		for(int i=cot-1; i>=d; i--)	a[hang][i] = gt--;
		for(int i=hang-1; i>d; i--) a[i][d] = gt--;
		d++; hang--; cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}	
		printf("\n");
	}
	return 0;
}

