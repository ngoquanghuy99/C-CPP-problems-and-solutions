#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long n, a[200], b[200], k;
	cin>>n;
	int dem = 0;
	while(n!=0){
		int z = n%10;
		a[dem] = z;
		n/=10;
		dem++;
	}
	sort(a,a+dem);
	for(int i=0; i<dem; i++)
		b[i] = 1;
	for(int i=0; i<dem; i++){
		k = 1;
		if(b[i]){
			b[i] = 0;
			for(int j=i+1; j<dem; j++){
				if(a[i]==a[j]){
					k++;
					b[j] = 0;
				}
			}
			cout<<a[i]<<" "<<k<<endl;
		}
	}
}
