#include<stdio.h>
int giaithua(int n)
{
	if(n==0) return 1;
	else return n*giaithua(n-1);
}
int checkstrongnum(int n)
{
	int kq=0,tam=n;
	while(tam>0)
	{
		kq+=giaithua(tam%10);
		tam/=10;
	}
	if(kq==n) return 1; else return 0;
}
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		int tam;
		tam=a;
		a=b;
		b=tam;
	}
	for (int i=a;i<=b;i++) if(checkstrongnum(i)==1) printf("%d ",i);
		return 0;
}

