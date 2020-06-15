#include<stdio.h>
#include<math.h>
int prime(int x){
	if(x<2) return 0;
	else for(int i=2; i<=sqrt(x); i++)
			if(x%i==0) return 0;
	return 1;
}
int main(){
	int n, gt, d, cot, hang, a[50][50], b[5000];
	int dem = 0;
	scanf("%d", &n);
	d = 0, hang = n - 1; cot = n - 1;
	for(int i=0; i<10000; i++){
		if(prime(i))
			b[dem++] = i;
	}
	int y = 0;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) a[d][i] = b[y++];
		for(int i=d+1; i<=hang; i++) a[i][cot] = b[y++];
		for(int i=cot-1; i>=d; i--)	a[hang][i] = b[y++];
		for(int i=hang-1; i>d; i--) a[i][d] = b[y++];
		d++; hang--; cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d \t", a[i][j]);
		}	
		printf("\n");
	}
	return 0;
}

