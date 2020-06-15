#include<iostream>
#include<cmath>
using namespace std;

int sum1cot(int a[][200], int n, int j){
	int sum1c = 0;
	for(int i=0; i<n; i++) 
		sum1c+=a[i][j];
	return sum1c;
}
void sumcot(int a[][200], int n, int m){
	int sumc = 0;
	for(int j=0; j<m; j++){
		sumc+=sum1cot(a,n,j);
		cout<<sumc<<" ";
		sumc = 0;
	}
}
int sum1hang(int a[][200], int i, int m){
	int sum1h = 0;
	for(int j=0; j<m; j++)
		sum1h+=a[i][j];
	return sum1h;
}
void sumhang(int a[][200], int n, int m){
	int sumh = 0;
	for(int i=0; i<n; i++){
		sumh+=sum1hang(a,i,m);
		cout<<sumh<<" ";
		sumh = 0;
	}
}

int main(){
	int n, a[200][200];
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	sumhang(a,n,n);
	sumcot(a,n,n);
	
}
