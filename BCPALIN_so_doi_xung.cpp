#include<iostream>
#include<cmath>
using namespace std;
int n, a[1000000];

int check(int n){
	int x = n;
	int tong = 0;
	while(x!=0){
		tong = tong*10 + (x%10);
		x/=10;
	}
	if(tong==n) return 1;
	else return 0;
}
int main(){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++){
		if(check(a[i]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
}
