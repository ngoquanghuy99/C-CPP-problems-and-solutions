#include <iostream>

using namespace std;
int so_nguyen_to(int n){
	int i = 2;
	int dem = 0;
		for( i  ; dem < n  ; i++)
			if( i  == 2 || i == 3 || i == 5 || i == 7 ) dem++;
			else 
				if( i % 2 != 0 && i%3 != 0 && i %5 != 0 && i %7 != 0) dem++;
	return i-1;
}
void hien_thi(int **a , int n){
	for(int i = 1; i <= n ; i++)
		for(int j = 1 ; j <= n ; j++)
			{
				cout<<a[i][j]<<" ";
				if(j == n)cout<<endl;
			}
}

void nhap(int**a , int n){
	int stt = 1;
	int j_ng =1 ;
	int t = n;
	while( stt <= n*n ){
		for(int i = j_ng ; i <= t ; i++ ) 
			a[j_ng][i] = so_nguyen_to(stt++);
		for(int i = j_ng +1 ; i <= t ; i++) 
			a[i][t] = so_nguyen_to(stt++);
		for(int i = t-1 ; i >= j_ng ; i--) 
			a[t][i] = so_nguyen_to(stt++);
		for(int i =  t-1 ; i >j_ng  ; i--) 
			a[i][j_ng] = so_nguyen_to(stt++);
		j_ng ++;
		t--;
	} 
			
}
 int main(){
	int **a, n;
	cin>>n;
	a = new int *[n];
	for(int i = 1 ; i <=n ; i++)a[i] = new int [n];
	nhap(a,n);
	hien_thi(a,n);
 }
