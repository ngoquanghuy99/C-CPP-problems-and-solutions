#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int r,c,i,j;
	cin>>r>>c;
	for (i=1;i<=r;i++){
		int k=i,dem=0;
		while(k>1 && dem<c){
			cout<<k--;
			dem++;
		}
		while(dem<c) {
			cout<<k++;
			dem++;
		}
		cout<<endl;
	}
	return 0;
}
