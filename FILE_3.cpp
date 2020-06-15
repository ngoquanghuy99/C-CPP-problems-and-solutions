#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define flush while((getchar()) != '\n')
typedef struct sanpham{
    int prc ;
    char name[100] ;
     float inprice, outprice ;
} product ;
int counter() {
    int c = 0;
    FILE *fp = fopen ("B17DCCN311.bin","rb") ;
    int temp = fgetc(fp) ;
    while (temp = fgetc(fp) != EOF){
        c ++ ;
        fseek(fp,sizeof(product) * c, SEEK_SET) ;
    }
    fclose(fp) ;
    return c ;
}
void addnew(int n){
    int c = counter() ;
    FILE *fp = fopen("B17DCCN311.bin", "ab+") ;
    while (n--){
    product prdct ;
    flush ;
    prdct.prc = ++c;
    fgets(prdct.name, 100,  stdin) ;
    scanf("%f %f", &prdct.inprice,  &prdct.outprice) ;
    fseek(fp,0,SEEK_END) ;
    fwrite(&prdct, sizeof(product), 1, fp) ;
    }
    fclose (fp) ;
}
void  edit(int n){
    FILE *fp = fopen("B17DCCN311.bin", "rb+") ;
    product prdct ;
    prdct.prc = n ;
    flush ;
    fgets(prdct.name, 100,  stdin)  ;
    scanf("%f %f", &prdct.inprice, &prdct.outprice) ;
    fseek(fp, sizeof(product) * (n - 1), SEEK_SET) ;
    fwrite(&prdct, sizeof(product),1,fp) ;
    fclose(fp) ;
}
void sort(float a[], int index[], int n)  {
    for (int i = 0; i < n ; i ++){
            float max =a[i] ;
        for (int j = i   +    1; j < n; j ++) {
            if (a[j] >  max){
                max = a[j] ;
                a[j] = a[i] ;
                a[i]  = max ;
                int temp = index[j] ;
                index[j] = index [i] ;
                index[i] = temp ;
            }
        }
    }
    for (int i = 0 ; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            if (a[i] == a[j] && index[i] > index[j]){
                int temp = index[j] ;
                index[j] = index [i] ;
                index[i] = temp ;
            }
        }
    }
}
void display(){
    int n = counter() , index[n] ;
    FILE *fp = fopen("B17DCCN311.bin", "rb") ;
    float a[n] ;
    for (int i = 0; i < n; i ++){
        float temp    ;
        fseek(fp,sizeof(product) * i + sizeof(int) + sizeof(char) * 100,SEEK_SET) ;
        fread(&temp,sizeof(float),1,fp) ;
        a[i] = temp       ;
        fread(&temp,sizeof(float), 1, fp) ;
        a[i] =    temp - a[i] ;
    }
    for (int i = 0; i < n; i ++) index[i] = i ;
    sort(a,index,n) ;
    for (int i = 0 ; i< n; i ++){
            char name[100] ;
        printf("%d ", index[i]  + 1      ) ;
        fseek(fp,sizeof(product) * index[i] + sizeof(int), SEEK_SET) ;
        fread(name,sizeof(char)   *  100, 1, fp) ;
        name[strlen(name) - 1] ='\0'   ;
        printf ("%s ", name) ;
        for (int j = 0; j < 2; j ++){
        float temp ;
        fread(&temp,  sizeof( float), 1, fp) ;
        printf("%.2f ", temp) ;
        }
        printf("\n") ;
    }
    fclose(fp) ;
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
        printf("Something went wrong") ;
    }
    return 0;
}
