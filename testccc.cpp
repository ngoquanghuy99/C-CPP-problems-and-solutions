#include<stdio.h>

int main(){
	int n, a[200], vitri, so;
	scanf("%d%d%d", &n, &vitri, &so);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}	
	for(int i=n; i>vitri; i--){
		a[i] = a[i-1];
	}
	a[vitri] = so;
	n++;
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
