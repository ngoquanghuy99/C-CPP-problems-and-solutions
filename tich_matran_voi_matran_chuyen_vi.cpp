#include<stdio.h>
#include<math.h>
int m, n, a[200][200], b[200][200], c[200][200]={0};
void nhap(){
    scanf("%d%d", &m, &n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void chuyenvi(){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            b[j][i] = a[i][j];
        }
    }
}
void tich(){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            for(int x=0; x<n; x++){
                c[i][j]+=a[i][x]*b[x][j];
            }
        }

    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    nhap();
    chuyenvi();
    tich();
}
