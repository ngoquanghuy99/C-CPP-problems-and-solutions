#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++)
			printf("~");
		for(int k=n; k>=i; k--)
			printf("*");
		for(int x=1; x<=n-i; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}

