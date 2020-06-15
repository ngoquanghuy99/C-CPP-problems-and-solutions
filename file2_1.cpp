#include<bits/stdc++.h>

struct sinhvien
{
	int STT;
	char ten[63];
	float d[3];
};
typedef struct sinhvien SinhVien;
SinhVien *sv; 


void NhapS(SinhVien *sv,int n,int k)
{
	int i,j;
	FILE *fin = fopen("B17DCCN311.bin","ab");
	for(i=k;i<(n+k);i++)
	{
	sv[i].STT=i+1;
	fwrite((int*)(&sv[i].STT),sizeof(int),1,fin);
	fflush(stdin);
	gets(sv[i].ten);
	fwrite((char*)(&sv[i].ten),63,1,fin);
	scanf("%f %f %f",&sv[i].d[0],&sv[i].d[1],&sv[i].d[2]);
	for(j=0;j<3;j++)
	fwrite((float*)(&sv[i].d[j]),sizeof(float),1,fin);
	}
	fclose(fin);
}

void SuaS(SinhVien *sv,int n,int k)
{
	int i,j;
	FILE *fin = fopen("B17DCCN311.bin","wb");
	fflush(stdin);
	gets(sv[n-1].ten);
	scanf("%f %f %f",&sv[n-1].d[0],&sv[n-1].d[1],&sv[n-1].d[2]);
	for(i=0;i<k;i++)
	{
		sv[i].STT=i+1;
		fwrite((int*)(&sv[i].STT),sizeof(int),1,fin);
		fwrite((char*)(&sv[i].ten),63,1,fin);
		for(j=0;j<3;j++) fwrite((float*)(&sv[i].d[j]),sizeof(float),1,fin);		
	}
	fclose(fin);
}

void InSTD(SinhVien *sv,int k)
{
	int *s;
	int i,j;
	int min=99,imin=-1;
	s=(int*)calloc(k,sizeof(int));
	for(i=0;i<k;i++)
	for(j=0;j<3;j++)
	s[i]+=sv[i].d[j];
	for(j=0;j<k;j++)
	{
	for(i=0;i<k;i++)
	{
	if(s[i]<min) {min=s[i];imin=i;}
	}
	if(j!=(k-1)) printf("%d %s %.1f %.1f %.1f\n",imin+1,sv[imin].ten,sv[imin].d[0],sv[imin].d[1],sv[imin].d[2]);
	else printf("%d %s %.1f %.1f %.1f",imin+1,sv[imin].ten,sv[imin].d[0],sv[imin].d[1],sv[imin].d[2]);
	s[imin]=100;
	imin=-1;
	min=99;
	}
	free(s);	
}
int main()
{
	int i=0,j,k,a;
	int n;
	
	sv=(SinhVien*)malloc(sizeof(SinhVien));
	FILE *fin = fopen("B17DCCN311.bin","rb");
	while(fread(&sv[i].STT,sizeof(int),1,fin)==1)
	{
	if(i!=0) sv=(SinhVien*)realloc(sv,(i+1)*sizeof(SinhVien));
	fread(&sv[i].ten,63,1,fin);
	for(j=0;j<3;j++)
	fread(&sv[i].d[j],sizeof(float),1,fin);
	i++;
	}
	fclose(fin);
	k=i;
	
	scanf("%d",&a);

	if(a==1)
	{
	scanf("%d",&n);
	sv=(SinhVien*)realloc(sv,(n+i)*sizeof(SinhVien));
	NhapS(sv,n,k);
	printf("%d",n);
	}
	else 

	if(a==2)
	{
		scanf("%d",&n);
		SuaS(sv,n,k);
		printf("%d",n);		
	}
	else 

	if(a==3)
	{
		InSTD(sv,k);
	}
	free(sv);
	return 0;	
}
