#include<iostream>
#include<cmath>
using namespace std;
bool ngto(int x){
	if(x<2) return false;
	else for(int i=2; i<=sqrt(x); i++)
			 if(x%i==0) return false;
	return true;
}
int main(){
	int a, b, min, max;
	cin>>a>>b;
	int sum = 0;
	max = a>b?a:b;
	min = a<b?a:b;
	for(int i=min; i<max; i++){
		if(ngto(i))
			sum+=i;
	}
	cout<<sum;
}
