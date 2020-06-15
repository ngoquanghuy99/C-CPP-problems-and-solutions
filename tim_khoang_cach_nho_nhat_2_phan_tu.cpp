#include<stdio.h>
#include<math.h>

int main(){
    int n, a[500], gtmin, pt1, pt2;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    gtmin = abs(a[0] - a[1]);
    pt1 = a[0], pt2 = a[1];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(a[i] - a[j]) < gtmin){
                gtmin = abs(a[i] - a[j]);
                pt1 = a[i] < a[j] ? a[i] : a[j];
                pt2 = a[i] > a[j] ? a[i] : a[j];
            }
        }
    }
    printf("%d %d %d", gtmin, pt1, pt2);
}
