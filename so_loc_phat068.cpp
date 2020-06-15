#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, dem, dem1;
	scanf("%d", &n);
	dem = dem1 = 0;
	while(n!=0){
		int z=n%10;
		if(z==0 || z== 6 || z==8){
			dem1++;
		}
		n/=10;
		dem++;
	}
	if(dem1==dem){
		printf("1");
		return 0;
	}
	printf("0");
	
	return 0;
}

