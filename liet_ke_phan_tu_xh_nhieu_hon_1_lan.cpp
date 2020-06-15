#include<stdio.h>

int main(){
    int n, a[500], b[500], dem, demm;
    scanf("%d", &n);
    demm = 0;
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int j=0; j<n; j++)
        b[j] = 1;
    for(int i=0; i<n; i++){
        dem = 1;
        if(b[i]){
            b[i] = 0;
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    dem++;
                    b[j] = 0;
                }
            }
            if(dem>1){
                printf("%d ", a[i]);
                demm++;
            }
        }
    }
    if(demm==0) printf("0");
}
