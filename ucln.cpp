#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a, b, k;
	scanf("%d%d", &a, &b);
	k = a*b;
	while(b!=0){
		int temp = b;
		b = a%b;
		a = temp;
	}
	printf("%d %d", a, k/a);

	return 0;
}

