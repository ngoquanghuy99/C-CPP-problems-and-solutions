#include<stdio.h>
#include<string.h>
char s[300], s1[50][50], *p;
int i, add;
int dem = 0, k = 0, max = -1;
int b[300], mang[200];
void process(){
	p = strtok(s, " ");
	while(p!='\0'){
		strlwr(p);
		strcpy(s1[dem++], p);
		p = strtok(NULL, " ");
	}
}

void count(){
	for(int i=0; i<dem; i++){
		k = 1;
		if(b[i]){a
			b[i] = 0;
			for(int j=i+1; j<dem; j++){
				if(strcmp(s1[i],s1[j])==0){
					k++;
					b[j] = 0;
				}
			}
			mang[i] = k;
		}
	}
	for(int i=0; i<dem; i++)
		if(mang[i] > max){
			max = mang[i];
			add = i;
		}
	printf("%s %d", s1[add], max);
}
void arrayb(){
	for(int i=0; i<dem; i++)
		b[i] = 1;
}
int main(){
	gets(s);
	process();
	arrayb();
	count();
	
}
