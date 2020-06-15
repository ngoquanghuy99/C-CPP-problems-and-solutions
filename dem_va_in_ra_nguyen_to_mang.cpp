#include<stdio.h>
#include<math.h>

int nguyento(int n){
	if(n<2) return 0;
	else {
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) 
				return 0;
		}
	}
	return 1;	
}

int main(){
	int n, a[500], dem;
	scanf("%d", &n);
	dem = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(nguyento(a[i])) dem++;
	}
	printf("%d ", dem);
	for(int i=0; i<n; i++){
		if(nguyento(a[i])) printf("%d ", a[i]);
	}
	
}
