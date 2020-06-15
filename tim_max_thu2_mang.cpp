#include<stdio.h>
#include<math.h>
int main(){
	int n, a[400], max, max2;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for(int i=0; i<n; i++)
		if(a[i] > max) max = a[i];
	max2 = a[0];
	for(int i=0; i<n; i++)
		if(a[i] > max2 && a[i] != max) max2 = a[i];
	if(max2<max)
	printf("%d",max2);
	return 0;
}

