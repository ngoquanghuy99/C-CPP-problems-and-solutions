#include<iostream>
#include<cmath>
using namespace std;
int prime(int y){
	if(y<2) return 0;
	else for(int i=2; i<=sqrt(y); i++)
			if(y%i==0) return 0;
	return 1;
}
int inde(int x){
	int dem = 0, count = 0, result = 0, in = 0, de = 0, arr[200];
	while(x!=0){
		arr[dem++] = x%10;
		x/=10;
	}
	int arr1[200];
	for(int i=0; i<dem; i++)
		arr1[i] = 1;
	for(int i=0; i<dem; i++)
		if(arr[0]<arr[1]){
			if(arr[i]<arr[i+1]) in++;
		}
		else if(arr[0]>arr[1]){
			if(arr[i]>arr[i+1]) de++;
		}
	
	if(dem==in-1 || dem==de-1) return 1;
	else return 0;
}
int main(){
	int n, hichic;
	cin>>n;
	hichic = 0;
	for(int i=pow(10,n-1); i<pow(10, n)-1; i++){
		if(prime(i) && inde(i))
			hichic++;
	}
	cout<<hichic;
	
}
