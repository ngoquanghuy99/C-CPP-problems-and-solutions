#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
//int a[100005];
void rev(int b[][50]){
	for(int i=0; i<18; i++)
		for(int j=0; j<6; j++)
			if(i%2!=0)
				swap(b[i][j],b[i][6-1-j]);					
}

int main(){
	int n, dem;
//	int c[200] = {0};
	int b[50][50] = {0};
//	dem = 0;
//	cin>>n;
	int y = 1;
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
	for(int i=0; i<18; i++)
		for(int j=0; j<6; j++)
			b[i][j] = y++;
//	rev(b);
	for(int i=1; i<=18; i++){
		for(int j=1; j<=6; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	
}



// a[i] xuat ra ket qua la a[i+6]
