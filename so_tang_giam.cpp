#include<iostream>
#include<cmath>
using namespace std;
bool prime(int z){
	if(z<2) return false;
	else for(int i=2; i<=sqrt(z); i++)
			if(z%i==0) return false;
	return true;
}
bool increase(int x){
	int dem = 0, array[200];
	while(x!=0){
		array[dem++] = x%10;
		x/=10;
	}
	for(int i=0; i<dem-1; i++)
		if(array[i]>=array[i+1])
			return false;
	return true;
}
bool decrease(int y){
	int dem1 = 0, array1[200];
	while(y!=0){
		array1[dem1++] = y%10;
		y/=10;
	}
	for(int i=0; i<dem1-1; i++)
		if(array1[i]<=array1[i+1])
			return false;
	return true;
}
int main(){
	int n, count;
	cin>>n;
	count = 0;
	for(int i=pow(10,n-1); i<=pow(10,n)-1; i++){
		if(prime(i) && (increase(i) || decrease(i)))
			count++;
	}
	cout<<count;
}
