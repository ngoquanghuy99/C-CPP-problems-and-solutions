#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int n){
	int dem;
	long long tong, x;
	dem = tong = 0;
	x = n;
	while(x!=0){
		int z=x%10;
		dem++;
		x/=10;
	}
	x = n;
	while(x!=0){
		tong+=pow(x%10, dem);
		x/=10;
	}
	if(tong == n)
		return true;
	return false;
}
int main(){
	long long n, so, min, max;
	cin>>n;
	so = 0;
	for (long long i=1; i<n; i++){
		if(armstrong(i)){
			cout<<i<<" ";
			so++;
	    }
	}
	if(so==0) 
		cout<<0;
	return 0;
}

