#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[200], b[200], c[200], n, m, k, dem;
	k = dem =0;
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		cin>>b[i];
	for(int i=0; i<n; i++){
		k = 0;
		for(int j=0; j<m; j++){
			if(a[i]==b[j]){
				k = 1;
				break;
			}
		}
		if(!k)
			c[dem++] = a[i];
	}
	for(int i=0; i<dem; i++)
		cout<<c[i]<<" ";
}
