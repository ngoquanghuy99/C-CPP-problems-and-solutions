#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long dem = 0, n;
	cin>>n;
	for(long long i=1; i<=n; i++){
		if(n%i==0) dem++;
	}
	cout<<dem;
}
