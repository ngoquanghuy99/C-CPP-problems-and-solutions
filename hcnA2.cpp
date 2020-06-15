#include <iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cin>>r>>c;
	int k=0,max=(r>c)?r:c,max1=max;
	for (i=0;i<r;i++)
	{
		int l=max;
		for (j=0;j<c-k;j++) cout<<l;
		while(l<max1) 
			cout<<++l;
		if(r>c && i<(r-c+1)) 
		{
			max--;
			k++;
		}
		else if(r<=c) 
		{
			k++;
			max--;
		}
		cout<<endl;
	}
	return 0;
}
