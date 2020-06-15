#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long gt = 1;
	if(n<0)
		return 0;
	else{
		for(long long i=1; i<=n; i++){
			gt*=i;
		}
	}
	printf("%lld", gt);
	
	return 0;
}

