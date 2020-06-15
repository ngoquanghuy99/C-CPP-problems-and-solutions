#include<iostream>
using namespace std;
int main(){
	int a, b, c, max;
	cin>>a>>b>>c;
	max = ((a>b?a:b)>c?(a>b?a:b):c);
	cout<<max;
	
}
