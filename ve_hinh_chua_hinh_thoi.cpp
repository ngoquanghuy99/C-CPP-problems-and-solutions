#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i; j++)
			cout<<"*";
		for(int k=n; k>n-i; k--)
			cout<<"~";
		for(int x=0; x<i; x++)
			cout<<"~";
		for(int y=n; y>i; y--)
			cout<<"*";
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++)
			cout<<"*";
		for(int k=n-1; k>i; k--)
			cout<<"~";
		for(int x=1; x<n-i; x++)
			cout<<"~";
		for(int y=n+1; y>n-i; y--)
			cout<<"*";
		cout<<endl;
	}
}
