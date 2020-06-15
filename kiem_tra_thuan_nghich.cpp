#include<stdio.h>
#include<math.h>

int nghich(int n){
	int tong, x;
	x = n;
	while(n!=0){
		tong = tong*10 + (n%10);
		n/=10;
	}
	if(tong==x)	return 1;
	else return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	if(nghich(n)) printf("1");
	else printf("0");
	return 0;
}
