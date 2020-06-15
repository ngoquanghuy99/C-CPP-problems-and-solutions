#include<stdio.h>
#include<math.h>
#include<string.h>

int songuyento(int m){
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
	int n, mang[200][200], sum;
	scanf("%d", &n);
	sum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &mang[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i>=j && songuyento(mang[i][j]))
				sum+=mang[i][j];	
		}
	}
	printf("%d", sum);

	return 0;
}

