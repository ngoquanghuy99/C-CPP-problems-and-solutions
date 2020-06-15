#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, a[200][200];
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		cin>>a[i][j];
	for(int i=0; i<n; i++){
		for(int j=n-1; j>=0;j--)
			cout<<a[j][i]<<" ";
		cout<<endl;
	}
}

