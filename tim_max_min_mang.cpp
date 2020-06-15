#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[500], max, min;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	max = min = a[0];
	for(int i=0; i<n; i++){
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	printf("%d %d", max, min);

	return 0;
}

