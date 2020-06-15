#include<iostream>
using namespace std;

int main(){
	int a, b, arr[200][200];
	cin>>a>>b;
	int x = a;
	for(int i=0; i<a; i++)
		for(int j=0; j<b; j++)
			arr[i][j] = 1;
	for(int i=0; i<=a; i++){
		for(int j=0; j<=b; j++){
			if(a%2==0){
				arr[(a/2)-1][j]=0;
				arr[(a/2)][j]=0;
			}
			if(a%2!=0)
				arr[(a/2)][j]=0;
			if(b%2==0){
				arr[i][(b/2)-1]=0;
				arr[i][(b/2)]=0;
			}
			if(b%2!=0)
				arr[i][(b/2)]=0;
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
