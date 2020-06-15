#include<bits/stdc++.h>
using namespace std;
int gt(long long x){
	if(x==0) return 1;
	else return x*gt(x-1);
}
int main(){
	long long n;
	cin>>n;
	long long m = n;
	int tong = 0;
	while(m!=0){
		tong += gt(m%10);
		m/=10;
	}
	if(tong==n) cout<<1;
	else cout<<0;
	
}
