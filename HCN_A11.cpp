#include<iostream>
using namespace std;
int main(){
	int a,b,i,j;
	cin>>a>>b;
	int max=(a>b)?a:b;
	for (i=0;i<a;i++){
		int k=max;
		j=0;
		while(j<b){
			while(k>max-i && j<b){
				cout<<k--;
				j++;
			}
			if(j<b){
				cout<<k;
				j++;
			}
		}
		cout<<endl;
	}
}
