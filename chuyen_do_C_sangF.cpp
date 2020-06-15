#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float c;
	cin>>c;
	float f = (c*9/5) + 32;
	cout<<fixed<<setprecision(2)<<f;
}
