#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			printf("~");
		}
		for(int k=n; k>=i; k--){
			if(k==n || k==i || i==1 || i==n) printf("*");
			else printf(".");
		}
		printf("\n");
	}

	return 0;
}

