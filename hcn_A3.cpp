#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,i,j;
	cin>>a>>b;
	int min=abs(a-b)+1,k=0,max=(a>b)?a:b;
	for (i=0;i<a;i++)
	{
		int k=max,dem=0;
		while(k>min){
			cout<<k--;
			dem++;
		}
		for (j=0;j<b-dem;j++) cout<<min;
		if(a>b && i>=(a-b))
			min++;
		else if(a<=b) min++;
		cout<<endl;
	}
	return 0;
}
