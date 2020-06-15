#include<stdio.h>
#include<string.h>

int main(){
	char *p, s[300], s1[50][50];
	int dem = 0;
	gets(s);
	strlwr(s);
	p = strtok(s, " ");
	while(p!='\0'){
		p[0] = p[0] - 32;
		strcpy(s1[dem++],p);
		p = strtok(NULL, " ");
	}
	strupr(s1[dem-1]);
	printf("%s, ", s1[dem-1]);

	for(int i=0; i<dem-1; i++)
		printf("%s ", s1[i]);
}
