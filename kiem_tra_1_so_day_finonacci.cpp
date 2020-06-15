#include<stdio.h>
#include<math.h>

int main(){
	int n, f0, f1, f;
	f0=0; f1=1, f=1;
	scanf("%d", &n);
	while(f0+f1<=n){
		f = f0 + f1;
		f1 = f0;
		f0 = f;
	}
	if(f==n) printf("1");
	else printf("0");
}
