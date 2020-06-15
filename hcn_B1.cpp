#include<iostream>
using namespace std;
int main(){
	int a, b, arr[200][200], k;
	cin>>a>>b;
	for(int i=0; i<a; i++)
		for(int j=0; j<b; j++)
			arr[i][j] = b;
	for(int i=0; i<a; i++){
		k = i+1;
		for(int j=0; j<b-i-1; j++){
			arr[i][j] = k;
			k++;
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
