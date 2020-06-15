#include<stdio.h>
#include<string.h>

char s[400], s1[50][50], *p;
int max = 0, dem = 0, b[200] = {0}, min = 2;
int i;


void process(){
	p = strtok(s, " ");
	while(p!='\0'){
		strcpy(s1[dem++], p);
		p = strtok(NULL, " ");
	}
	for(i=0; i<dem; i++){
		b[i] = strlen(s1[i]);
		if(b[i] > max)
			max = b[i];
	}
	min = strlen(s1[0]);
	for(i=0; i<dem; i++){
		b[i] = strlen(s1[i]);
		if(b[i] < min)
			min = b[i];
	}
}
void result(){
	for(i=0; i<dem; i++){
		if(b[i] == max){
			printf("%s ", s1[i]);
			break;
		}
	}
}
void result2(){
	for(i=0; i<dem; i++)		
		if(b[i] == min){
			printf("%s", s1[i]);
			break;
		}
}
int main(){
	gets(s);
	process();
	result();
	result2();
}






