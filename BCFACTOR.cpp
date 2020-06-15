#include<stdio.h>
#include<math.h>

int main(){
	long long n, dem;
	scanf("%lld", &n);
	if(n<2)
		return 0;
	else{
		for(long long i=2; i<=n; i++){
			while(n%i==0){
					printf("%lld ", i);
					n=n/i;
			}
		}
	}	
	return 0;
}

