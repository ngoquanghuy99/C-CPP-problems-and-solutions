#include <stdio.h>
#include <conio.h>

#include <stdlib.h> /* Them vao so voi phien ban tren DOS*/
int main()
{
 int i,mang_int[10];
 int *contro_int;
 for(i=0;i<=9;i++)
 mang_int[i]=i*2;
 contro_int=&mang_int[5];
 printf("\nNoi dung cua mang_int ban dau=");
 for (i=0;i<=9;i++)
 printf("%d ",mang_int[i]);
 printf("\nNoi dung cua contro_int ban dau =");
 for (i=0;i<5;i++)
 printf("%d ",contro_int[i]);
 for(i=0;i<5;i++)
 contro_int[i]++;
 printf("\n--------------------");
 printf("\nNoi dung cua mang_int sau khi tang 1=");
 for (i=0;i<=9;i++)
 printf("%d ",mang_int[i]);
 printf("\nNoi dung cua contro_int sau khi tang 1=");
 for (i=0;i<5;i++)
 printf("%d ",contro_int[i]);
 if (contro_int!=NULL)
 free(contro_int);
 getch();
 return 0;
}

