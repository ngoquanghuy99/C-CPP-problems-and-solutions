#include<stdio.h>
#include<math.h>

int main(){
	int n, m, a[101], b[101][2], x, y;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
    for(int j=1; j<=m; j++){
        scanf("%d%d", &b[j][1], &b[j][2]);
    }
    for(int j=1; j<=m; j++){
        x = b[j][1], y = b[j][2];
        for(int k=1; k<y; j++)
            a[x-1]+=1;
        for(int t=y+1; t<=a[x]; t++)
            a[x+1]+=1;
        a[x] = 0;
    }
    for(int i=1; i<=n; i++){
        printf("%d\n", a[i]);
    }

     /*               for(int i=1; i<y; i++){
                        a[x-1]+=1;
                    }
                    for(int i=y+1; i<=a[x]; i++){
                        a[x+1]+=1;
                    }
                    a[x]=0;
                    for(int i=1; i<=n; i++){
                        printf("%d\n", 	a[i]);
                    }
        */
}
