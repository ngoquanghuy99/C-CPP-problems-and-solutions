#include<bits/stdc++.h>
int main(){
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	if(c>r){
		for (i=c-r+1;i<=c;i++){
			for (j=1;j<=c;j++)
				if(i<=j) printf("%d",j);
				else printf("%d",i );
			printf("\n");
		}
	}
	else{
		for (i=1;i<=r;i++){
			for (j=(r-c+1);j<=r;j++)
				if(i<=j) printf("%d",j);
				else printf("%d",i);
			printf("\n");
		}
	}
	return 0;
}
