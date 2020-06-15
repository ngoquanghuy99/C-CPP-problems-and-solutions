#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, x, z, dem;
	scanf("%d", &n);
	x = 0;
	dem = 0;
	while(n!=0){
		x = x*10 + n%10;
		n/=10;	
	}
	printf("%d", x);
	return 0;
}

