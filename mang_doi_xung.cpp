#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[500], dem;
	scanf("%d", &n);
	dem = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n/2; i++){
		if(a[i]==a[n-i-1])
			dem++;
	}
	if(dem==n/2)
		printf("1");
	else
		printf("0");

	return 0;
}

