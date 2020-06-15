#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			printf("1");
		}
		printf("\n");
	}

	return 0;
}

