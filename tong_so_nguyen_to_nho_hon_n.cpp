#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x){
	if(x<2) return false;
	else for(int i=2; i<=sqrt(x); i++)
			 if(x%i==0) return false;
	return true;	 
}
int main(){
	int n, sum;
	sum = 0;
	cin>>n;
	for(int i=2; i<n; i++)
		if(prime(i))
			sum+=i;
	cout<<sum;
}
