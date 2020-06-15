#include<iostream>
using namespace std;
int main(){
	int a, b, max, min;
	cin>>a>>b;
	max = a>b?a:b;
	min = a<b?a:b;
	for(int i=1; i<=min; i++){
		for(int j=i; j>=1; j--)
			cout<<j;
		for(int k=2; k<=min-i+1; k++)
			cout<<k;	
		if(a<b){
			int e, x;
			x = 1;
			while(x<=min){
				e = max - x;
				for(int u=1; u<=max-min; u++){
					cout<<e;
					e++;
				}
				++x;
			}
		}
		cout<<endl;	
	}
	if(a>b){
		int x = min;
		for(int i=1; i<=max-min; i++){
			x = min+i;
			for(int j=0; j<min; j++){
				cout<<x;
				x--;
			}
			cout<<endl;
		}
	}
	
	
}
