#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=n; j>=1; j--){
			printf("%d ", j);
		}
	}

	return 0;
}

