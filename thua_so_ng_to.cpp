#include<cmath>
#include<iostream>
using namespace std;

int main(){
	int n;
	int N;
	cin >> N;
	long long sum = 0;
	for(int i=1; i<=N; i++){
		cin >> n;
		long long can = sqrt(n);
		int j = 2;
		while(j <= can){
			while(n%j == 0){
				sum += j;
				cout<<j<<" ";
				n /= j;
			}
			j++;
		}
		if(n != 1) sum += n;
		cout << " " << n;
		cout << endl;
	}
	cout << sum << endl;
	return 0;
}

