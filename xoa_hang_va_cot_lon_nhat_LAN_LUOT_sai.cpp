#include<iostream>
#include<cmath>
using namespace std;
int a[1000][1000], n, h[1000], c[1000], m;

void tong1hang(int a[][1000], int n, int m, int h[]){
	for(int i=0; i<n; i++){
		int tong = 0;
		for(int j=0; j<m; j++){
			tong+=a[i][j];
		}
		h[i] = tong;
	}
}
int maxhang(int a[][1000], int n, int m, int h[]){
	int max = h[0]; 
	int hangxoa = 0;
	for(int i=0; i<n; i++){
		if(h[i] > max){
			max = h[i];
			hangxoa = i;
		}
	}
	return hangxoa;
}
void tong1cot(int a[][1000], int n, int m, int c[], int h[]){
	for(int j=0; j<m; j++){
		int tong = 0;
		for(int i=0; i<n; i++){
			if(i!=maxhang(a,n,m,h))
				tong+=a[i][j];
		}
		c[j] = tong;
	}
}
int maxcot(int a[][1000], int n, int m, int c[]){
	int max = c[0]; 
	int cotxoa = 0;
	for(int i=0; i<m; i++){
		if(c[i] > max){
			max = c[i];
			cotxoa = i;
		}
	}
	return cotxoa;
}
int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>a[i][j];
	tong1hang(a,n,m,h);
	int maxrow = maxhang(a,n,m,h);
	tong1cot(a,n,m,c,h);
	int maxcol = maxcot(a,n,m,c);
	for(int i=0; i<n; i++){
		if(i != maxrow){
			for(int j=0; j<n; j++){
				if(j!= maxcol){
					cout<<a[i][j]<<" ";
				}
			}
			cout<<endl;
		}
	}
	
}
