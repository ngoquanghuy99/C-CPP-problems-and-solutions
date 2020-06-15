#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
int main()
{
 int i,j;
 int mang_int[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,
 15,16,17,18,19,20};
 int *contro_int;
 contro_int=(int*)mang_int;
 printf("\nNoi dung cua mang_int ban dau=");
 for (i=0;i<4;i++)
 {
 printf("\n");
 for (j=0;j<5;j++)
 printf("%d\t",mang_int[i][j]);
 }
 printf("\n-----------------------------");
 printf("\nNoi dung cua contro_int ban dau \n");
 for (i=0;i<20;i++)
 printf("%d ",contro_int[i]); 
 for(i=0;i<20;i++)
 contro_int[i]++ ;
 printf("\n-----------------------------");
 printf("\nNoi dung cua mang_int sau khi tang 1=");
 for (i=0;i<4;i++)
 {
 printf("\n");
 for (j=0;j<5;j++)
 printf("%d\t",mang_int[i][j]);
 }
 printf("\nNoi dung cua contro_int sau khi tang 1=\n");
 for (i=0;i<20;i++)
 printf("%d ",contro_int[i]);
 if (contro_int!=NULL)
 free(contro_int);
 getch();
 return 0;
}

