// liet ke n so nguyen to dau tien
#include<stdio.h>
#include<math.h>

int songuyento(int m){
	for(int i=2; i<=sqrt(m); i++)
		if(m%i==0) 
			return 0;
	return 1;
}

main(){
	int i=2, n, dem = 0;
	scanf("%d", &n);
	while(dem<n){
		if(songuyento(i)){
			printf("%d ", i);
			dem++;
		}
		i++;
	}
}
