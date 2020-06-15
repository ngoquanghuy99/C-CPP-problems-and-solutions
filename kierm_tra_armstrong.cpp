#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, dem, x, tong;
	cin>>n;
	x = n;
	dem = tong = 0;
	while(n!=0){
		n%10;
		dem++;
		n/=10;
	}
	n = x;
	while(x!=0){
		tong+=pow(x%10, dem);
		x/=10;
	}
	if(tong==n) cout<<1;
	else cout<<0;
}
