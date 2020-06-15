#include<iostream>
#include<cmath>
using namespace std;

int prime(int x){
	if(x<2) return 0;
	else for(int i=2; i<=sqrt(x); i++)
			if(x%i==0) return 0;
	return 1;
}

int main(){
	int n;
	cin>>n;
	int hang = n-1, cot = n-1, d = 0, dem = 0, a[30][30], b[4000];
	for(int i=0; i<10000; i++)
		if(prime(i)) b[dem++] = i;
	int y = 0;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) a[d][i] = b[y++];
		for(int i=d+1; i<=hang; i++) a[i][cot] = b[y++];
		for(int i=cot-1; i>=d; i--) a[hang][i] = b[y++];
		for(int i=hang-1; i>d; i--) a[i][d] = b[y++];
		d++; hang--; cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"   "<<a[i][j];
		}
		cout<<endl;
	}
}
