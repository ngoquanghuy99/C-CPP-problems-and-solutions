 #include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int gt=0;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
gt++;
if(j>i) printf("%d ",n-i+1);
else printf("%d ",n-j+1);
}

printf("\n");
}
}
