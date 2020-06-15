#include<stdio.h>
int main(){
	int n, a[500], b[500];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		b[n-i-1] = a[i];
	}
	for(int i=0; i<n; i++){
		printf("%d ", b[i]);
	}









}

