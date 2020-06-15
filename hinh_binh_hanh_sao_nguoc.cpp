#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=a; i++){
		for(int j=1; j<i; j++){
			printf("~");
		}
		for(int k=b; k>=1; k--){
			if(k==b || k==1 || i==a || i==1) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
