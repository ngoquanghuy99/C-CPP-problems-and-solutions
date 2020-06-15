#include <stdio.h>
#include <string.h>
void loaibo(char s[], char s1[])
{  char kq[200];
   int ns=strlen(s), ns1=strlen(s1);
   int i=0, j,k,t=0;
   while(i<=ns)
   {  
      k=i;
      j=0;
      while(s[k]==s1[j]){
	   k++; j++;
	   }
	  if(j==ns1||j==ns1+1||j==ns1+2) i+=ns1;
      else kq[t++] = s[i++];  
   }
      kq[t]='\0'; 
      printf("%s",kq);
}
main()
{
   char s[255], s1[50];
   gets(s);
   gets(s1);
   loaibo(s,s1);
}
