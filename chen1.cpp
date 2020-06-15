#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void chen(int n, int m, int p, int a[], int b[]){
	for(int i=n+m-1; i>=p+m; i--){
		a[i] = a[i-m];
	}
	for(int i=m+p-1; i>=p; i--){
		a[i] = b[i-p];
	}
	for(int i=0; i<n+m; i++){
		printf("%d ", a[i]);
	}
}
 
int main(){
	int n, m, p, a[200], b[200];
	scanf("%d%d", &n, &m);
	nhap(a,n);
	nhap(b,m);
	scanf("%d", &p);
	chen(n,m,p,a,b);
	return 0;
}
 
