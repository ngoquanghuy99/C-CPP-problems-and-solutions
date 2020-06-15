#include<iostream>
#include<cmath>
using namespace std;
int n, arr[10000], arr2[10000];
int main(){
	int k = 0, dem = 0;
	cin>>n;
	for(int i=2; i<=n; i++){
		while(n%i==0){
			if(n==i) arr[k++] = i;
			else arr[k++] = i;
			n/=i;
		}
	}
//	for(int i=0; i<k; i++){
//		cout<<arr[i]<<" ";
//	}
	for(int i=0; i<k; i++)
		arr2[i] = 1;
	for(int i=0; i<k; i++){
		dem = 1;
		if(arr2[i]){
			arr2[i] = 0;
			for(int j=i+1; j<k; j++){
				if(arr[i] == arr[j]){
					dem++;
					arr2[j] = 0;
				}
			}
			cout<<arr[i]<<" "<<dem<<endl;
		}
	}
}
