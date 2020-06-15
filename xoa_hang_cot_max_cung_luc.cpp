#include<iostream>
using namespace std;
int tmax(int a[],int n)
{
	int max=a[0],vt=0;
	for(int i=1;i<n;i++)
		if(a[i]>max){
			max=a[i];
			vt=i;
		}
	return vt;
}
int main(){
	int m,n,a[100][100],h[100]={0},c[100]={0},mh,mc,sum=0;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			h[i]+=a[i][j];
			c[j]+=a[i][j];
		}
	mh=tmax(h,m);
	mc=tmax(c,n);
	for(int i=0;i<m;i++){
		if(i==mh)
			continue;
		for(int j=0;j<n;j++){
			if(j==mc)
				continue;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
