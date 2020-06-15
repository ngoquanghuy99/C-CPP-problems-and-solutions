#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, gt;
	scanf("%d", &n);
	gt = 1;
	for(int i=1; i<=n; i++){
		gt*=i;
	}
	printf("%d", gt);

	return 0;
}

