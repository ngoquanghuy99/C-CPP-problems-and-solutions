#include<bits/stdc++.h>
int main(){
	long long a, b;
	scanf("%d%d", &a, &b);
	if(b==0){
		printf("0");
		return 0;
	}

	else{
		printf("%lld ", a+b);
		printf("%lld ", a-b);
		printf("%lld ", a*b);		
		double x = a/b;
		printf("%.2lf ", x);
		printf("%lld", a%b);
	}
}
