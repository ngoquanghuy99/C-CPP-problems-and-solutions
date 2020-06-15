#include<stdio.h>

int main(){
	int n, min, max, s[100][2];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d%d", &s[i][0], &s[i][1]);
		if (i==0){
				min=s[i][0];
				max=s[i][1];
		}
		else{
			if(s[i][0]<min)
				min=s[i][0];
			if(s[i][1]>max)
				max=s[i][1];
		}
	}
	int k=0;
	int vt;
	for(int i=0; i<n; i++){
		if(s[i][0]==min){
			if(s[i][1]==max){
				vt=i+1;
				k=1;
				break;
			}
		}
	}
	if(k==0)
		printf("-1");
	else
		printf("%d", vt);
	return 0;
}

