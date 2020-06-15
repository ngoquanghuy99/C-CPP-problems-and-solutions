
#include<iostream>
 using namespace std;
int check(int* a,int m,int* b,int n)
{
 int dem=0,i,j,k;
 for( i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
      k=0;
      if(a[i]==b[j]) break;
       else          k=1;
     }
     if(k==1)
     dem++;
 
   }
   return dem;
}
main()
{
int a[10],b[10],m,n,i;
cout<<"\nnhap so phan tu mang a:";cin>>m;
cout<<"\nnhap so phan tu mang b:";cin>>n;
 
cout<<"\n\nNHAP MANG:";
cout<<"\nmang A:";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"\nmang B:";
for(i=0;i<n;i++)
cin>>b[i];
 
cout<<"so luong:"<<check(a,m,b,n);

}
