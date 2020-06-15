#include <stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int flag=0;
	int i=2;
	while (n!=1)
	{
		if (!flag && i>sqrt(n))
		{
			printf("%d",n);
			return 0;
		}
		if (!(n%i))
		{
			if (!flag)
			{
				printf("%d ",i);
				flag=1;
			}
			else 
				printf("x %d ",i);
			n/=i;
		}
		else 
			i++;
	}
	return 0;
}
