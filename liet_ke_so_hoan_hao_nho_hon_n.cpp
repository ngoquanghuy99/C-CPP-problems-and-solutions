#include<iostream>
#include<cmath>
using namespace std;

bool check(int x){
	long long sum = 0;
	for(long long i=1; i<=sqrt(x); i++){
		if(x%i==0)
			sum+=i+(x/i);	
	}
	if(x==sum-x) return true;
	else return false;
}
int main(){
	long long n;
	cin>>n;
	for(long long i=6; i<n; i++)
		if(check(i)) cout<<i<<" ";
}
