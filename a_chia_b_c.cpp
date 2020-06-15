#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a%b==0 && a%c==0) cout<<1;
	else cout<<0;
}
