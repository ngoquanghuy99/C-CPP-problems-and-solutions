#include<iostream>
#include<cmath>
using namespace std;
bool cprime(long long y){
	if(y<2) return false;
	else 
		for(long long i=2; i<=sqrt(y); i++)
			if(y%i==0) return false;
	return true;
}
bool prime2(long long k){
	int dem = 0;
	for(long long i=2; i<=k; i++)
		if(k%i==0 && cprime(i))
			dem++;
	if(dem<3) return false;
	else return true;
}
bool thuannghich(long long x){
	long long z = x;
	int t = 0;
	while(z>0){
		t = t*10 + z%10;
		z/=10;
	}
	if(t==x) return true;
	else return false;
}
int main(){
	long long a, b, min, max;
	cin>>a>>b;
	min = a<b?a:b;
	max = a>b?a:b;
	for(long long i=min; i<=max; i++){
		if(thuannghich(i) && prime2(i))
			cout<<i<<" ";
	}
}
