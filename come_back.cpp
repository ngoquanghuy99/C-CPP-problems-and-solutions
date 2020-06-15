#include<stdio.h>

void inputtt(int a[], int &n){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void swaptt(int a[],  int n){
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j]<a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void outputtt(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int n, a[100];
	inputtt(a,n);
	swaptt(a,n);
	outputtt(a,n);
	return 0;
}

