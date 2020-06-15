#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int r,c,i,j;
	cin>>r>>c;
	int k,dem;
	for (i=1;i<=r;i++)
	{
		int dem=0;
		if((r>c && i<(r-c+1)) || (r<=c)) 
		{
			k=i;
			while(k<=c)
			{
				cout<<k++;
				dem++;
			}
			k-=2;
		}
		else if(r>c && i>=(r-c+1)) k=i;
		while(dem<c)
		{
			cout<<k--;
			dem++;
		}
		cout<<endl;
	}
	return 0;
}
