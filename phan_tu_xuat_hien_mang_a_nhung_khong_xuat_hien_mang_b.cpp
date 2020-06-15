#include <bits/stdc++.h>

int a[1001],b[1001];
int res[1001];
int main(){
	int n,m;
	int i,j;
	int count=0;
	scanf("%d%d",&n,&m);
	for (i=1; i<=n; i++)
		scanf("%d",&a[i]);
	for (i=1; i<=m; i++)
		scanf("%d",&b[i]);
		
		
	for (i=1; i<=n; i++){
		int k=0;
		for (j=1; j<=m; j++){
			if (a[i]==b[j]){
				k=1;
				break;
			}
			
		}
		if (!k){
				count++;
				res[count]=a[i];
			}
	}
	std::sort(res+1,res+1+count);
	for (i=1; i<=count; i++)
		printf("%d ",res[i]);
}
