#include<iostream>
using namespace std;

int main(){
	int n, a[200][200], b[200][200];
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			b[i][j] = a[n-1-j][i];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
