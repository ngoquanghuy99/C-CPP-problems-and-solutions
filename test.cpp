#include<stdio.h>
#include<string.h>
int main(){
	int dem = 0, max, min, b[50];
	char s[300], *p, s1[50][50];
	gets(s);
	p = strtok(s, " ");
	while(p!='\0'){
		strcpy(s1[dem++], p);
		p = strtok(NULL, " ");
	}
	min = max = strlen(s1[0]);
	for(int i=0; i<dem; i++){
		b[i] = strlen(s1[i]);
		if(b[i] > max) max = b[i];
		if(b[i] < min) min = b[i];
	}
	for(int i=0; i<dem; i++){
		if(b[i]==max){
			printf("%s ", s1[i]);
			break;
		}
	}
	for(int i=0; i<dem; i++){
		if(b[i]==min){
			printf("%s", s1[i]);
			break;
		}
	}
}
