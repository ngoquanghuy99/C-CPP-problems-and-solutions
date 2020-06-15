#include<iostream>
using namespace std;
int main(){
	int a, b, max, arr[200][200];
	cin>>a>>b;
	max = a>b?a:b;
	for(int i=0; i<a; i++)
		for(int j=0; j<b; j++){
			arr[i][j] = max - i;
		}
	for(int j=0; j<b; j++)
		for(int i=0; i<a; i++){
			arr[j][i] = max - i;
		}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
