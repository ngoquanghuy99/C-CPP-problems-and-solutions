#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int dem = 0;
	while(n!=0){
		int x = n%10;
		dem++;
		n/=10;
	}
	cout<<dem;
}
