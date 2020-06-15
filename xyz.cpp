#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int tach(char str[500],char tach[100][100])						//tach tu
{
	int dem=0;
	char *tu=(char*) calloc(100,sizeof(char));
	tu=strtok(str," ");
	while(tu!='\0')
	{
		strcpy(tach[dem],tu);
		dem++;
		tu=strtok(NULL," ");
	}
	free(tu);
	return dem;				// tra ve so tu trong xau str
}


int mangmoi(char tu1lan[100][100],char tach1[100][100],char a[100][100],int danhdau[100],int dem1)	//mang tu1lan gom cac tu trong tach1 liet ke 1 lan
{																					//tao mang va dem cac tu (moi tu dem 1 lan)
	int i,j,count=0;																//mang a nhu 1 bien de giup doi gia tri
	for(i=0;i<dem1;i++)				// tao mang danh dau voi cac phan tu la 1
		danhdau[i]=1;
	
	for(i=0;i<dem1;i++)					//tao mang tu1lan
		{
			if(danhdau[i])
			{
				danhdau[i]=0;
				for(j=i+1;j<dem1;j++)
					if(strcmp(tach1[i],tach1[j])==0)
					{
						danhdau[j]=0;
					}
			strcpy(tu1lan[count],tach1[i]);
			count++;
			}	
		}
	for(i=0;i<count-1;i++)														//sap xep lai mang tang dan
		for(j=i+1;j<count;j++)
			{
				if(strcmp(tu1lan[i],tu1lan[j])>0)
					{
							 strcpy(a[i],tu1lan[i]);
							strcpy(tu1lan[i],tu1lan[j]);
							strcpy(tu1lan[j],a[i]);
					}
			}
	return count;	//tra ve so tu trong mang tu1lan	
}	
	
void loaitu(char tu1lan[100][100],char tach2[100][100],int d1[20],int count,int dem2)	// 	mang d kiem tra (1 dung khac 1 sai)
{																								
	int i,j;
	for(i=0;i<count;i++)
	{
		d1[i]=1;
		for(j=0;j<dem2;j++)
			{
					if(strcmp(tu1lan[i],tach2[j])==0)					//so sanh 2 xau
					{
						d1[i]++;
					}	
			}
	}
	
	for(i=0;i<count;i++)
		if(d1[i]==1)	
			printf("%s ",tu1lan[i]);										//in ra tu ko co trong xau 2
}	
int main()
{
	char str1[500],str2[500], tach1[100][100], tach2[100][100],tu1lan[100][100],a[100][100];
	int d1[20],danhdau[100];
	gets(str1);
	gets(str2);
	int dem1=tach(str1,tach1);									//dem1 : so tu trong xau 1
	int dem2=tach(str2,tach2);									//dem2 : so tu trong xau 2
	int count=mangmoi(tu1lan,tach1,a,danhdau,dem1);
	loaitu(tu1lan,tach2,d1,count,dem2);					

	return 0;
}
