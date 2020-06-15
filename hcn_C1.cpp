#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int r,c,i,j;
	cin>>r>>c;
	for (i=0;i<r;i++){
		int k=i+1,dem=0;
		if((r>c && i<(r-c+1))|| (r<=c)){
			while(k<=c){
				cout<<k++;
				dem++;
			}
		}
		else if(r>c && i>=(r-c+1)) cout<<i+1;
		if(r>c && i<(r-c+1)) k=i;
		else if(r>c && i>=(r-c+1)) k=r-c+1;
		else if(r<=c) k=i;
		while(k>=1 && dem<c){
				cout<<k--;
				dem++;
			}
		cout<<endl;
	}
	return 0;
}
