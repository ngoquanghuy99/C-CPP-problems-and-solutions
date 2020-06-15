#include<stdio.h>
#include<math.h>

long long giaithua(int n){
	if(n<=2 && n>=0)
		return n;
	else
		return n*giaithua(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	if(n<0)
		return 0;
	printf("%lld", giaithua(n));
	return 0;
}

