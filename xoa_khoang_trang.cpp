#include<stdio.h>
#include<string.h>

int main(){
	char s[300], *p, s1[50][50];
	int count = 0, k = 0;
	gets(s);
	p = strtok(s, " ");
	while(p!='\0'){
		strcpy(s1[count], p);
		count++;
		p = strtok(NULL, " ");
	}
	while(k!=count){
		printf("%s", s1[k]);
		k++;
	}
	
}
