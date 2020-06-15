#include<stdio.h>
#include<string.h>

int main(){
	char s[2000], s1[200][200];
	int dem=0;
	char tam[500];
	gets(s);
	char *p = strtok(s, " ");
	while(p!=NULL){
		strcpy(s1[dem], p);
		dem++;
		p = strtok(NULL, " ");
	}
//	for(int i=0; i<dem; i++){
//		for(int j=i+1; j<dem; j++){
//			if(strcmp(s1[i], s1[j])>0){
//				strcpy(tam,s1[i]);
//				strcpy(s1[i], s1[j]);
//				strcpy(s1[j], tam);
//			}
//		}
//	}
	for(int i=0; i<dem; i++){
		printf("%s\n", s1[i]);
	}
	
	
}
