#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	int dem = 0;
	cin>>n;
	int n1 = n;
	int n2 = n;
	while(n!=0){
		n%10;
		dem++;
		n/=10;
	}
	int x = n1/pow(10,dem-1);
	int y = n2%10;
	cout<<x<<" "<<y;
}
