#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, a[500], b[500], k;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>k;
	for(int i=0 ;i<n-k; i++)
		b[i] = a[i+k];
	for(int i=n-k; i<n; i++)
		b[i] = a[i-(n-k)];
	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	return 0;
}
