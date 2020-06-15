#include<stdio.h>
#include<math.h>

int thuannghich(int n){
    int somoi = 0;
    int x = n;
    while(n!=0){
        somoi = somoi*10 + (n%10);
        n/=10;
    }
    if(somoi == x && somoi > 10) return 1;
    else return 0;
}

int main(){
    int n, dem, a[700];
    scanf("%d", &n);
    dem = 0;
    for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(thuannghich(a[i]))
            dem++;
    }
    printf("%d ", dem);
    for(int i=0; i<n; i++)
        if(thuannghich(a[i]))
            printf("%d ", a[i]);
}
