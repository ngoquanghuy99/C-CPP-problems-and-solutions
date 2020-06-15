#include<iostream>
#include<cmath>
using namespace std;

int checkprime(int g){
	if(g<2) return 0;
	else for(int i=2; i<=sqrt(g); i++)
			if(g%i==0)
				return 0;
	return 1;
}
int thuannghich(int x){
	int y = x;
	int sum = 0;
	while(x!=0){
		sum = sum*10 +(x%10);
		x/=10;
	}
	if(sum == y) return 1;
	else return 0;
}
int sixandeight(int k){
	int sum1 = 0;
	int dem1 = 0;
	while(k!=0){
		int e = k%10;
		sum1+=e;
		if(e==6) dem1++;
		k/=10;
	}
	
	if(dem1>=1 && (sum1%10)==8) return 1;
	else return 0;
}

int main(){
	long long a, b, dem;
	cin>>a>>b;
	dem = 0;
	long long max = a>b?a:b;
	long long min = a<b?a:b;
	for(int i=min; i<=max; i++)
		if(thuannghich(i) && sixandeight(i))
			cout<<i<<" ";
			//dem++;
	//cout<<dem;
}
