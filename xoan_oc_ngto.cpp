#include <stdio.h>
#define N 15
int SNT(int a)
{
	int i=1,b;
	b=a;
	while(i<(a-1))
	{
		i+=1;
		if((a%i)==0) b=0;
	}
	if(b==1) b=0;
	return(b);
}
int SNT2(int a)
{
	int i;
	if(a==1) return(2);
	else
	{
		i=SNT2(a-1);
		while(1)
		{
			i++;
			if(SNT(i)!=0) return(i);
		}
	}
}
void IM2(int a[][N],int n){
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[N][N],i,j,n,x,xph=0,xxc=0,xth=0,xlc=0,t=0;
	scanf("%d",&n);	
	x=1;
	while(t<=n/2)
{	
	j=xlc;
	while(j<(n-xxc))
		{
		j++;
		a[xph+1][j]=SNT2(x);
		x++;
		}
		xph++;
	
	i=xph;
	while(i<(n-xth))
		{
		i++;
		a[i][n-xxc]=SNT2(x);
		x++;
		}
		xxc++;

	j=n-xxc;
	while(j>xlc)
		{
		a[n-xlc][j]=SNT2(x);
		j--;
		x++;
		}
		xth++;
	
	i=n-xth;
	while(i>xph)
		{
		a[i][xph]=SNT2(x);
		i--;
		x++;
		}
		xlc++;
	
	t++;
}	
	IM2(a,n);
	return 0;		
}
