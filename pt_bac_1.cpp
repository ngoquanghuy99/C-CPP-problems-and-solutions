#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a, b, x;
	cin>>a>>b;
	if(a==0){
		if(b==0) cout<<"VSN";
		else cout<<"VN";
	}
	else{
		x = -b/a;
		cout<<fixed<<setprecision(2)<<x;
	}
}
