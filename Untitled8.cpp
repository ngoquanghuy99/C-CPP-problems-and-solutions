#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2; i<=n; i++){
		while(n%i==0){
			if(n==i) cout<<i;
			else cout<<i<<" ";
			n/=i;
		}
	}
}
