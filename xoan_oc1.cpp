#include<stdio.h>
int a[50][50],n,j,i,gt,d,hang,cot;

void tao(){
	d=0; gt=1; hang=n-1; cot=n-1;
	while(d<=n/2){
		for(i=d;i<=cot;i++) a[d][i]=gt++;
		for(i=d+1;i<=hang;i++) a[i][cot]=gt++;
		for(i=cot-1;i>=d;i--) a[hang][i]=gt++;
		for(i=hang-1;i>d;i--) a[i][d]=gt++;
		d++; hang--; cot--;
	}
}

void inkq(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n\n");
	}
}

main(){
	scanf("%d",&n);
	tao();
	inkq();
}
