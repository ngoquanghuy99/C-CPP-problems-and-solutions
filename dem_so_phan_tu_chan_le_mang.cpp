#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[500], chan, le;
	scanf("%d", &n);
	chan = le = 0;
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		if(a[i]%2==0) chan++;
		else le++;
	}
	printf("%d %d", chan, le);

	return 0;
}

