#include<stdio.h>
#include<math.h>
#include<string.h>

int kiemtra(int m){
	int tong = 0;
	for(int i=1; i<sqrt(m); i++){
		if(m%i==0)
			tong+=i;
	}
	if(tong!=m) return 0;
	return 1;
}

int main(){
	int a, b, max, min;
	scanf("%d%d", &a, &b);
	max = a>b?a:b;
	min = a<b?a:b;
	for(int i=min; i<=max; i++){
		if(kiemtra(i))
			printf("%d ", i);
	}
	return 0;
}

