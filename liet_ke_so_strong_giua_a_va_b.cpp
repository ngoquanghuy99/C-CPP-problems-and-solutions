#include<bits/stdc++.h>
using namespace std;
int gt(long long x){
	if(x==0) return 1;
	else return x*gt(x-1);
}
int strong(int z){
	long long m = z;
	int tong = 0;
	while(m!=0){
		tong += gt(m%10);
		m/=10;
	}
	if(tong==z) return 1;
	else return 0;
}
int main(){
	long long a, b, min, max;
	cin>>a>>b;
	min = a<b?a:b;
	max = a>b?a:b;
	for(int i=min; i<=max; i++)
		if(strong(i))
			cout<<i<<" ";
}
