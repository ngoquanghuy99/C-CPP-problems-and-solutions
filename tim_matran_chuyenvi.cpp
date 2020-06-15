// tim ma tran chuyen vi
#include<stdio.h>

int main(){
    int n, m, a[200][200], b[200][200];
    scanf("%d%d", &n,&m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[j][i] = a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
