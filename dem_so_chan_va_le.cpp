#include<stdio.h>
int main(){
	int n, le, chan;
	scanf("%d", &n);
	chan = le = 0;
	while(n!=0){
		int z = n%10;
		if(z%2==0) chan++;
		else le++;
		n/=10;
	}
	printf("%d %d", le, chan);
}

