#include<iostream>
using namespace std;

int main(){
	int node, ed1, ed2;
	cin>>node;
	int matrix[node][node];
	for(int i=0; i<node; i++)
		for(int j=0; j<node; j++)
			matrix[node][node] = 0;
	while(cin>>ed1>>ed2){
		matrix[ed1][ed2] = 1;
		matrix[ed2][ed1] = 1;
	}
	for(int i=0; i<node; i++){
		for(int j=0; j<node; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
