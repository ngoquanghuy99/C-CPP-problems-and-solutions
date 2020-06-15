#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, tich;
	cin>>n;
	tich = 1;
	while(n!=0){
		tich*=(n%10);
		n/=10;
	}
	cout<<tich;
}
