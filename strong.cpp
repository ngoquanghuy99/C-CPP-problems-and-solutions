#include<stdio.h>
#include<math.h>
int giaithua(int z){
	if(z==0)
		return 1;
	else
		return z*giaithua(z-1);
}
int tonggt(int k){
	int tong = 0;
	while(k!=0){
		int z=k%10;
		tong+=giaithua(z);
		k/=10;
	}
		return tong;
}

main(){
	int a, b, dem, i, max, min;
	scanf("%d%d", &a, &b);
	dem = 0;
	max = a>b?a:b;
	min = a<b?a:b;
	for(i=min; i<=max; i++){
		if(i==tonggt(i))
			dem++;
	}
	if(dem>0){
		for(i=min; i<=max; i++){
			if(i==tonggt(i))
				printf("%d ", i);
		}
	}
	else
		printf("0");
}

