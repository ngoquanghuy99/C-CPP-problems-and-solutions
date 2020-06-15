#include<bits/stdc++.h>
int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(b==0){
		printf("0");
		return 0;
	}

	else{
		printf("%lld ", a+b);
		printf("%lld ", a-b);
		printf("%lld ", a*b);		
		printf("%.2f ", (float)a/b);
		printf("%lld", a%b);
	}
}
