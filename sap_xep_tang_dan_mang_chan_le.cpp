#include<iostream>
using namespace std;

void sapxeptang(int a[], int x){
	for(int i=0; i<x-1; i++){
		for(int j=x-1; j>i; j--){
			if(a[j] < a[j-1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
void ooo(int a[], int x){
	for(int i=0; i<x; i++)
		cout<<a[i]<<" ";
}
int main(){
	int n, a[500], b[500], c[500], n1, n2;
	cin>>n;
	n1 = n2 = 0;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++){
		if(a[i]%2==0)
			b[n1++] = a[i];
		else 
			c[n2++] = a[i];
	}
	sapxeptang(b,n1);
	sapxeptang(c,n2);
	ooo(b,n1);
	ooo(c,n2);
}


