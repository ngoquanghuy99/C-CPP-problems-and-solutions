#include<stdio.h>
#include<math.h>

int songuyento(int m){
	if(m<2)
		return 0;
	else
		for(int i=2; i<=sqrt(m); i++){
			if(m%i==0){
				return 0;
			}
		}
	return 1;
}

int main(){
	int n, a[200][200];
	scanf("%d", &n);
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<=j && songuyento(a[i][j]))
				sum+=a[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}

