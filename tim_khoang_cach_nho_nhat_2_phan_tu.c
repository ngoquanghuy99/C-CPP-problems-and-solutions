#include<stdio.h>
#include<math.h>

int main(){
	int n, a[800], min;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		if(i==0){
			min = abs(a[i+1] - a[i]);
		}
		else{
			if(abs(a[i+1]-a[i])< min)
				min = abs(a[i+1] - a[i]);
		}
	}
	for(int i=1; i<n; i++){
		if(abs(a[i+1]-a[i]) == min){
			if(a[i+1]<a[i])
				printf("%d %d %d", min, a[i+1], a[i]);
			else
				printf("%d %d %d", min, a[i], a[i+1]);
			return 0;
		}		
	}
}

