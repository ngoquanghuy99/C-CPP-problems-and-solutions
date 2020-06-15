#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[200], count;
	scanf("%d", &n);
	count = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &n);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j])
				count++;
		}
	}
	printf("%d", count);

	return 0;
}

