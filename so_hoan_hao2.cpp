#include<stdio.h>
#include <math.h>
int chekHH(int a){
 
	int s=0,i;
 
	if(a==0) return 0;
 
	for(i=1;i <=sqrt(a);i++){
		if(a%i == 0){
                s += i;
		if (a / i != a)
		if (i != sqrt(a)) s += a/i ;
	}
	}
	if(s==a) {
		return 1;
	} else {
		return 0;
	}
}
 
int main(){
	int a;
	scanf("%d",&a);
	int i;
	for(i=1; i<a; i++) {
		if(chekHH(i) == 1) {
			printf("%d ",i);
		}
	}
	return 0;
}
