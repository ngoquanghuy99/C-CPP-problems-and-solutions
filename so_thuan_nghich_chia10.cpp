#include<stdio.h>
#include<math.h>
int check(int m){
	int t=0, tong;
	int x=m;
	tong = 0;
	while(m!=0){
		t=t*10 + (m%10);
		tong+=(m%10);
		m/=10;
	}
	if(t==x && tong%10==0)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i=pow(10,n-1); i<=((pow(10,n-1))*10 - 1); i++){
		if(check(i))
			dem++;
	}
	printf("%d", dem);
}

