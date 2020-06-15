#include<iostream>
#include<cmath>
using namespace std;
int prime(int y){
	if(y<2) return 0;
	else for(int i=2; i<=sqrt(y); i++)
			if(y%i==0) return 0;
	return 1;
}
int fibo(int x){
	int sum = 0;
	while(x!=0){
		sum+=(x%10);
		x/=10;
	}
	int f0 = 0, f1 = 1, f = 1;
	while(f0+f1<=sum){
		f = f0 + f1; 
		f1 = f0; 
		f0 = f;
	}
	if(f==sum) return 1;
	else return 0;
}

int main(){
	int a, b, min, max;
	cin>>a>>b;
	max = a>b?a:b;
	min = a<b?a:b;
	for(int i=min; i<=max; i++){
		if(prime(i) && fibo(i))
			cout<<i<<" ";
	}
}
