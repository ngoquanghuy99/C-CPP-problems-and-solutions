#include<stdio.h>

int main(){
    int n, a[500][500], b[500][500];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            b[i][j] = a[n-i-1][n-j-1];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
