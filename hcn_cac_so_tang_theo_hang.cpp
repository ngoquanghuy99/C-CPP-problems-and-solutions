#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int x = 1;
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<x;
			x++;
		}
		cout<<endl;
	}
}
