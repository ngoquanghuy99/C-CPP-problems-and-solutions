#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, f0, f1, f;
	scanf("%d", &n);
	f0=0; f1=1;
	for(int i=1; i<=n; i++){
		f = f0;
		f0 = f1;
		f1 = f1 + f;
		printf("%d ", f);
	}

	return 0;
}

