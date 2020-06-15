#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, p, a[800];
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &p);
	for(int i=p; i<=n-1; i++){
		a[i] = a[i+1];
	}
	n--;
	for(int i=1; i<=n; i++){
		printf("%d ", a[i]);
	}

	return 0;
}


