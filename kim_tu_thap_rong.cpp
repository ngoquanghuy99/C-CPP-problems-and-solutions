#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			printf("~");
		}
		for(int k=n; k>n-i; k--){
			if(k==n || i==n  )
				printf("*");
			else printf(".");
		}
		for(int x=n+1; x<n+i; x++){
			if(x==n+i-1 || i==n) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
