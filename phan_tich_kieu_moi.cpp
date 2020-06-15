#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, a[300], dem;
	cin>>n;
	dem = 0;
	for(int i=2; i<=n; i++){
		while(n%i==0){
			a[dem++] = i;
			n/=i;
		}
	}
	for(int i=0; i<dem; i++)
		cout<<a[i]<<" ";
}
