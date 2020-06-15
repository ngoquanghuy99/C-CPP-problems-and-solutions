#include<stdio.h>
#include<math.h>

int nguyento(int m){
	for(int i=2; i<=sqrt(m); i++){
		if(m%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	i = 2;
	while(i<=b){
		if(nguyento(i) && i>=a){
			printf("%d ", i);
		}
		i++;
	}

	return 0;
}

