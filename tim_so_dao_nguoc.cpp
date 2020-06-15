#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int tong = 0;
	while(n!=0){
		tong = tong*10 + n%10;
		n/=10;
	}
	cout<<tong;
}
