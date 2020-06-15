#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100

typedef struct
    {
        int MSV;
        char Name[30];
        float Mon_A;
        float Mon_B;
        float Mon_C;
    }
    Student;
int const size=sizeof(Student);
//---------------------------------------
void add_new(FILE *fp)
{
    fp=fopen("B17DCCN311.bin", "rb");
    int lp, id;
    Student a;
    scanf("%d\n", &lp);
    int x=lp;
    if(fread(&a, size, 1, fp))
    {
        fseek(fp, -size, SEEK_END);
        fread(&a, size, 1, fp);
        id=a.MSV+1;
    }
    else id=1;
    fclose(fp);
    fp=fopen("B17DCCN311.bin", "ab");
    while(lp-->1)
    {
        a.MSV=id;
        id++;
        gets(a.Name);
        scanf("%f%f%f\n", &a.Mon_A, &a.Mon_B, &a.Mon_C);
        fwrite(&a, size, 1, fp);
    }
    a.MSV=id;
    id++;
    gets(a.Name);
    scanf("%f%f%f", &a.Mon_A, &a.Mon_B, &a.Mon_C);
    fwrite(&a, size, 1, fp);
    fclose(fp);
    printf("%d\n", x);
}
//---------------------------------------
void update(FILE *fp)
{
    fp=fopen("B17DCCN311.bin", "rb+");
    Student a;
    scanf("%d\n", &a.MSV);
    gets(a.Name);
    scanf("%f%f%f", &a.Mon_A, &a.Mon_B, &a.Mon_C);
    Student b;
    while(fread(&b, size, 1, fp))
    {
        if(b.MSV==a.MSV)
        {
            fseek(fp, -size, SEEK_CUR);
            fwrite(&a, size, 1, fp);
            break;
        }
    }
    printf("%d\n", a.MSV);
    fclose(fp);
}
//---------------------------------------
void print(FILE *fp)
{
    fp=fopen("B17DCCN311.bin", "rb+");
    Student a[MAX], tmp;
    int i=0;
    while(fread(&tmp, size, 1, fp))
    {
        a[i]=tmp;
        i++;
    }
    int j, k;
    for(j=0; j<i-1; j++)
    {
        for(k=j+1; k<i; k++)
        {
            if(a[j].Mon_A+a[j].Mon_B+a[j].Mon_C>a[k].Mon_A+a[k].Mon_B+a[k].Mon_C)
            {
                tmp=a[j];
                a[j]=a[k];
                a[k]=tmp;
            }
        }
    }
    for(j=0; j<i; j++)
    {
        printf("%d %s %.1f %.1f %.1f\n", a[j].MSV, a[j].Name, a[j].Mon_A, a[j].Mon_B, a[j].Mon_C);
    }
    fclose(fp);
}
int main()
{	
//	FILE* fp = fopen("B17DCCN311.bin","wb") ;
//	fclose(fp) ;	
    FILE *fp;
    int n;
    Student a;
    scanf("%d", &n);
    switch(n)
    {
    case 1 :
        add_new(fp);
        break;
    case 2 :
        update(fp);
        break;
    case 3 :
        print(fp);
        break;
    }
}
