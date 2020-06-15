#include<stdio.h>
#include<math.h>
int nguyento(int m){
	if(m<2)	return 0;
	else for(int i=2; i<=sqrt(m); i++)
		if(m%i==0) return 0;
	return 1;
}
int tach(int m){
	int tong, dem1, demz;
	tong = demz = dem1 = 0;
	while(m!=0){
		int z=m%10;
		tong+=z;
		demz++;
		if(nguyento(z)) 
			dem1++;
		m/=10;
	}
	if(demz == dem1 && nguyento(tong))
		return 1;
	else
		return 0;
}

int main(){
	int a, b, dem, max, min;
	scanf("%d%d", &a, &b);
	dem = 0;
	max=a>b?a:b;
	min=a<b?a:b;
	for(int i=min; i<=max; i++){
		if(nguyento(i) && tach(i))
			dem++;
	}
	printf("%d", dem);

	return 0;
}

