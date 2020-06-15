#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j>=i) printf("%d ", n-i);
			else printf("%d ", n-j);
		}
		printf("\n");
	}
}
