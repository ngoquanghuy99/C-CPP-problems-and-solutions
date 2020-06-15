#include <iostream>
#include <algorithm>
using namespace std;

main() {
	int n;
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=i; j>0; j--){
			cout<<j<<" ";
		}
//		for (int j=2; j<=n-i+1; j++){
//			cout<<j<<" ";
//		}
		cout<<endl;
	}
}
