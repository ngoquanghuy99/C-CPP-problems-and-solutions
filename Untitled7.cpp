#include<stdio.h>
#include<math.h>

int main(){
    int n, a[1000], b[1000], dem, dem2, k, mang[1000];
    scanf("%d", &n);
    dem2 = 0; k = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int j=0; j<n; j++){
        b[j] = 1;
    }
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
            if(dem==1){
				mang[k++] = a[i];
                dem2++;
            }
           // if(dem2==0) printf("0");
        }
    }
    printf("%d\n", dem2);
    for(int i=0; i<k; i++)
    	printf("%d ", mang[i]);
}
