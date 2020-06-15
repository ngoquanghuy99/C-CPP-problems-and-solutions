#include<stdio.h>
#include<math.h>
int main(){
	int n, dem;
	scanf("%d", &n);
	dem = 0;
	if(n<2){
		printf("0");
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0)
				dem++;
		}
	}
	if(dem!=0){
		printf("0");
		return 0;
	}
	printf("1");
}

