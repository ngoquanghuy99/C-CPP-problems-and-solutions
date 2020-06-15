#include<stdio.h>
int n, m, a[500][500], b[500][500];
int c[500][500] = {0};
void nhap(int x[][500], int y, int z){
    for(int i=0; i<y; i++){
        for(int j=0; j<z; j++){
            scanf("%d", &x[i][j]);
        }
    }
}
int main(){
    scanf("%d%d", &n, &m);
    nhap(a,n,m);
    nhap(b,m,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

