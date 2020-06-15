#include<iostream>

using namespace std;
int main(){
	int n, n1, n2;
	cin>>n;
	n1 = n2 = n;
	int x = n1/365;
	int y = (n2%365)/7;
	int z = (n%365)%7;
	cout<<x<<" "<<y<<" "<<z;
}
