#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	for(int i=n+m-1; i>=p+m; i--){
		a[i] = a[i-m];
	}
	for(int i=m+p-1; i>=p; i--){
		a[i] = b[j-x];
	}
	for(int i=0; i<n+m-1; i++){
		printf("%d", a[i]);
	}

	return 0;
}

