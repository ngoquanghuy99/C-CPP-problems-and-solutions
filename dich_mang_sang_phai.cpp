#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, a[500], k;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>k;
	int b[500] = {0};
	for(int i=0; i<k; i++)
		b[i] = a[n-k+i];
	for(int i=k; i<n; i++)
		b[i] = a[i-k];
	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
}
