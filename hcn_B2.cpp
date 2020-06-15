#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int i,j,f=(r>=c)?c:r,x;
	if(r>=c) x=abs(r-c);
	else x=0;
	for (i=0;i<r;i++){
		int k=f;
		j=0;
		while(j<c && k<c){
			if(i<x)
				cout<<k;
			else
				cout<<k++;
			j++;
		}
		while(j<c){
			cout<<c;
			j++;
		}
		if(r>=c && i>=x) f--;
		else if(r<c) f--;
		cout<<endl;
	}
}
