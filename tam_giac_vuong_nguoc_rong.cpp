#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++){
			if(j==1 || i==n || j==n-i+1 || i==1) printf("*");
			else printf(".");
		}
		printf("\n");
	}

	return 0;
}

