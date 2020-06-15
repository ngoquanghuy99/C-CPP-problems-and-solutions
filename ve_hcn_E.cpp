#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, gt, d, cot, hang, a[50][50];
	scanf("%d", &n);
	n=n*2-1;
	d = 0, gt = (n+1)/2, hang = n - 1; cot = n - 1;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) a[d][i] = gt;
		for(int i=d+1; i<=hang; i++) a[i][cot] = gt;
		for(int i=cot-1; i>=d; i--)	a[hang][i] = gt;
		for(int i=hang-1; i>d; i--) a[i][d] = gt;
		gt--; hang--; cot--, d++;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d", a[i][j]);
		}	
		printf("\n");
	}
	return 0;
}

