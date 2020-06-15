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
	long long n;
	cin>>n;
	for(int i=1; i<=n; i++)
		if(strong(i))
			cout<<i<<" ";
}
