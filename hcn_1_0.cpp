#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			if(i%2!=0) printf("1");
			else printf("0");
		}
		printf("\n");
	}

	return 0;
}

