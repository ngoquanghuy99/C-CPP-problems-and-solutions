#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int a, b, c, d;
	float x, x1, x2;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0) cout<<"NO";
		else{
			x = -c/b;
			cout<<fixed<<setprecision(2)<<x;
		} 
	}
	else{
		d = b*b - 4*a*c;
		if(d<0) cout<<"NO";
		else if(d==0){
			x = -b/(2*a);
			cout<<fixed<<setprecision(2)<<x;
		}
		else{
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			cout<<fixed<<setprecision(2)<<x1<<" "<<x2;
		}
	}
}
