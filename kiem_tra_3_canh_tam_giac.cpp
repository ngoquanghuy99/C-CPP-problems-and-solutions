#include<iostream>
using namespace std;
int main(){
	long long x, y, z;
	cin>>x>>y>>z;
	if(x>0&&y>0&&z>0 &&((x+y>z) && (y+z>x) && (x+z>y)))
		cout<<1;
	else cout<<0;
}
