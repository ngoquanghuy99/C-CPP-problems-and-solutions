#include<iostream>
#include<cmath>
using namespace std;
int isprime(int x){
	if(x<2) return 0;
	else{
		for(int i=2; i<=sqrt(x); i++)
			if(x%i==0)
				return 0;
	}
	return 1;
}
int main(){
	long long n;
	cin>>n;
	for(long long i=2; i<=(n); i++){
		if(n%i==0){
			if(isprime(i)){
				int dem = 0;
				while(n%i==0){
					n/=i;
					dem++;
				}
				cout<<i<<" "<<dem<<endl;
			}
		}
	}
	if(n!=1 && isprime(n))
		cout<<n<<" "<<"1"<<endl;
}
