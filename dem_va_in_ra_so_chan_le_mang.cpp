#include<stdio.h>
#include<math.h>

void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int main(){
    int a[500], n, dem1, dem2;
    scanf("%d", &n);
    dem1 = dem2 =0;
    nhap(a,n);
    for(int i=0; i<n; i++){
        if(a[i]%2==0)
            dem1++;
        else dem2++;
    }
    printf("%d    ", dem1);
    for(int i=0; i<n; i++)
        if(a[i]%2==0) printf("%d ", a[i]);
    printf("\n");
    printf("%d    ", dem2);
    for(int i=0; i<n; i++)
        if(a[i]%2!=0) printf("%d ", a[i]);
    return 0;
}
