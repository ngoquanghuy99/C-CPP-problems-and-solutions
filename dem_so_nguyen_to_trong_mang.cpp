#include<stdio.h>
#include<math.h>
int nguyento(int m){
	if(m<2)
		return 0;
	else{
		for(int i=2; i<=sqrt(m); i++){
			if(m%i==0) 
				return 0;
		}
	}	
	return 1;
}
int main(){
	int n, a[200], b[200];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<n; j++){
		b[j]=1;
	}
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j]<a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		int dem=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j]){
					dem++;
					b[j]=0;
				}
			}
			if(nguyento(a[i]))
				printf("%d %d \n", a[i], dem);
		}
	}

	return 0;
}
