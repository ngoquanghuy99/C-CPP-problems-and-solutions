#include <stdio.h>
#include <string.h>
int main(){
     char s[1000];
     int i,j,n,m,dem,max=0;
     gets(s);
     for(i=0;i<strlen(s);i++){
     	if(s[i] != ' '){
    		j=i+1;
    		dem=1;
    		while(s[j] != ' ' && j<strlen(s)){
    			dem++;
    			if(dem>max){
          			max=dem;
          			n=i;
        		 	m=j;
    	 		}
     			j++;
    		}
    	}
     }
     for(i=n ; i<=m ; i++)  printf("%c",s[i]);
     printf(" %d",n+1);
}
