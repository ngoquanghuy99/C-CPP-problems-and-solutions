#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if(i%2==0){
				if(j%2!=0) cout<<0;
				else cout<<1;
			}
			else{
				if(j%2!=0) cout<<1;
				else cout<<0;
			}
		}
		cout<<endl;
	}
}
