#include<stdio.h>
#include<string.h>

int main(){
	char s[300], *p, s1[50][50];
	int dem = 0;
	gets(s);
	strlwr(s);
	p = strtok(s, " ");
	while(p!='\0'){
		p[0] = p[0] - 32;
		strcpy(s1[dem++], p);
		p = strtok(NULL, " ");
	}
	strupr(s1[0]);
	for(int i=1; i<dem; i++){
		if(i==dem-1)
			printf("%s, ", s1[i]);
		else 
			printf("%s ", s1[i]);
	}
	printf("%s", s1[0]);
	
}
