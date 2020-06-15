#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, a[300], b[300];
	int dem = 0, k = 0;
	cin>>n;
	for(int i=2; i<=n; i++){
		while(n%i==0){
			a[dem++] = i;
			n/=i;
		}
	}
	for(int i=0; i<dem; i++)
		b[i] = 1;
	for(int i=0; i<dem; i++){
		k = 1;
		if(b[i]){
			b[i] = 0;
			for(int j=i+1; j<dem; j++){
				if(a[i]==a[j]){
					k++;
					b[j] = 0;
				}
			}
			cout<<a[i]<<" ";
		}
	}
}
