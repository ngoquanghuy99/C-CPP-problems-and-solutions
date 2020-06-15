#include <stdio.h>
#include <string.h>
int dem=0;
void tachtu(char str[200],char tach[100][100])						//tach tu
{
	char *tu;
	tu=strtok(str," ");	
	while(tu!='\0')			
	{
		strlwr(tu);													//chuyen sang viet thuong
		strcpy(tach[dem],tu);
		dem++;
		tu=strtok(NULL," ");
	}
}
void danhdau(int dd[100])									//tao mang danh dau gom cac phan tu 1
{
	int i;
	for(i=0;i<dem;i++)
		{
			dd[i]=1;
		}	
}	
void kiemtra(char str[200],char tach[100][100],int dd[100],int soluong[100])
{
	int i,j,max=-1,vtri=0;
	for(i=0;i<dem;i++){												
		int count=1;
		if(dd[i])
		{
		dd[i]=0;
		for(j=i+1;j<dem;j++)
			{
				if(strcmp(tach[i],tach[j])==0)				
					{
						count++;							//dem so lan xuat hien cua tu
						dd[j]=0;
					}		
			}
			soluong[i]=count;
		}				
	}
	for(i=0;i<dem;i++)
		{													
			if(soluong[i]>max)										//tim tu xuat hien nhieu nhat
				{
					max=soluong[i];
					vtri=i;
				}	
		}
	printf("%s %d",tach[vtri],max)	;	 
}	
int main()
{
	char str[200], tach[100][100];
	int dd[100],soluong[100];
	gets(str);
	tachtu(str,tach);
	danhdau(dd);
	kiemtra(str,tach,dd,soluong);
	return 0;
}
