#include<stdio.h>
#include<string.h>

int demchu(char a[]){
    int dem = 0;
    if(a[0] != ' ') dem++;
    for(int i=0; i<strlen(a); i++)
        if(a[i] == ' ' && a[i+1] != ' ' && a[i+1] != '\0')
            dem++;
    return dem;
}

int main(){
    char a[500];
    gets(a);
    printf("%d", demchu(a));
}
