#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int r,c,i,j;
	cin>>r>>c;
	int max=(r>c)?r:c;
	for (i=0;i<r;i++){
		int dem=0;
		int k=max;
		while(k>1 && dem<c){
			cout<<k--;
			dem++;
		}
		while(dem<c){
			cout<<k++;
			dem++;
		}
		max--;
		cout<<endl;
	}
	return 0;
}
