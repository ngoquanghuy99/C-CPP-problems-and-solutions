#include<stdio.h>
#include<math.h>


int nguyento(int n){
	if(n<2) return 0;
	else for(int i=2; i<=sqrt(n); i++)
			if(n%i==0) return 0;
	return 1;
}

int dayfibo(int n){
	int f0, f1, f, x, tong;
	f0=0; f1=1; f=1;
	x = n; tong = 0;
	while(x!=0){
		int z=x%10;
		tong += z;
		x/=10;
	}
	while(f0+f1<=tong){
		f = f0 + f1;
		f1 = f0;
		f0 = f;
	}
	if(f==tong && nguyento(n)) return 1;
	else return 0;
}
int main(){
	int a, b, min, max;
	scanf("%d%d", &a, &b);
	min = a<b?a:b;
	max = a>b?a:b;
	for(int i=min; i<=max; i++){
		if(dayfibo(i))
			printf("%d", i);
	}	
}
