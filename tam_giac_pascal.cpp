#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,k=1,j;
	for (i=0;i<n;i++)
	{
		for (j=1;j<=n-i;j++) printf(" ");
		for (j=0;j<=i;j++)
			{
				if(j==0 || i==0) k=1;
				else k=k*(i-j+1)/j;
				printf("%d ",k);
			}
		printf("\n");

	}
	return 0;
}

