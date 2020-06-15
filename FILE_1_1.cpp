#include <stdio.h>
#include <strings.h>
#include <limits.h>
#define flush while((getchar()) != '\n')
using namespace std;
typedef struct sinhvien{
    int msv ;
    char name[100] ;
    float marks[3] ;
} sinhvien;
int counter(){
    FILE *outfile = fopen("B17DCCN311.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(sinhvien)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c ;
}
void addnew(int n){
    FILE *outfile = fopen("B17DCCN311.bin","rb+") ;
    while (n --){
        sinhvien SinhVien ;
        SinhVien.msv = counter() ;
        flush ;
        fgets(SinhVien.name,100,stdin) ;
        for (int i = 0; i < 3; i ++){
            scanf("%f", &SinhVien.marks[i]) ;
        }
        fseek(outfile,0,SEEK_END) ;
        fwrite(&SinhVien, sizeof(sinhvien),1, outfile) ;
    }
        fclose(outfile ) ;
}
void edit(int n){
    FILE *outfile = fopen("B17DCCN311.bin","ab") ;
    fseek(outfile,sizeof(sinhvien) *(n - 1),SEEK_SET) ;
        sinhvien  SinhVien ;
        SinhVien.msv = n ;
    flush ;
    fgets(SinhVien.name,100,stdin) ;
    for (int i = 0; i < 3; i ++)
        scanf("%f", &SinhVien.marks[i ]) ;
     fwrite(&SinhVien, sizeof(sinhvien), 1, outfile) ;
     fclose(outfile) ;
}
void sort (float a[], int index   [], int  n){
    for (int i = 0; i < n; i ++){
             float max = INT_MAX ;
            for (int j = i + 1 ; j < n; j ++){
                if (a[j] < max){
                        max = a[j]  ;
                     a[j] = a[i] ;
                     a[ i ] =  max ;
                     index[i] = j ;
                     index[j] = i ;
                }
            }
    }
}
 void display () {
    FILE *outfile = fopen("B17DCCN311.bin","rb") ;
        int n = counter(), c = 0, index[n], i = 0 ;
        float a[n] , mark[n][ 3] ;
    while (c != n)  {
        fseek(outfile,sizeof(sinhvien) * c + sizeof(int) + sizeof(char)* 100,SEEK_SET) ;
            float temp, sum   =  0 ;
        for (int j = 0; j < 3;  j ++){
        fread(&temp,sizeof(float),1,outfile) ;
        mark[i][j] = temp      ;
        sum += temp ;
        }
        a[i] = sum ;
        c ++ ;
              i ++ ;
    }
 
    for (int i  = 0; i < n; i ++) index[i] = i  ;
    sort(a,index,n) ;
    for (int i = 0; i < n ; i ++){
        printf ("%d ",    index [  i ]  +  1)   ;
        char name[100] ;
        fseek(outfile, sizeof(sinhvien)  *  (index[i]       ) + sizeof(int         ), SEEK_SET)  ;
        fread(&name, sizeof(char), 100,outfile) ;
        name [  strlen(name) - 1] = '\0' ;
        printf("%s ", name) ;
        for (int j = 0; j < 3; j ++)
                printf("%.1f ", mark [index[i]][j]) ;
        printf("\n")  ;
    }
 
 }
int main()
{
    int n ;
    scanf("%d", &n) ;
    switch (n) {
    case 1 :
        scanf("%d", &n) ;
        addnew(n) ;
        printf("%d",n) ;
        break ;
    case 2 :
        scanf("%d",&n) ;
        edit(n) ;
        printf("%d",n)  ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
