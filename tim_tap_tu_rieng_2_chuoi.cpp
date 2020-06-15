#include<bits/stdc++.h>

int main(){
	char tam[100];
	char s1[200], s2[200], s3[50][50], s4[50][50], s5[50][50], *p1, *p2;
	int dem1 = 0, dem2 = 0, k = 0, count = 0, x = 0, dem3 = 0;
	gets(s1);
	gets(s2);
	p1 = strtok(s1, " ");
	while(p1!='\0'){
		strcpy(s3[dem1++], p1);
		p1 = strtok(NULL, " ");
	}
	p2 = strtok(s2, " ");
	while(p2!='\0'){
		strcpy(s4[dem2++], p2);
		p2 = strtok(NULL, " ");
	}
	for(int i=0; i<dem1; i++){
		k = 0;
		for(int j=0; j<dem2; j++){
			if(strcmp(s3[i], s4[j])==0){
				k = 1;
				break;
			}
		}
		if(!k){
			strcpy(s5[count++], s3[i]);
		}	
	}
	for(int i=0; i<count-1; i++){
		for(int j=count-1; j>i; j--){
			if(strcmp(s5[j], s5[j-1])<0){
				strcpy(tam, s5[j]);
				strcpy(s5[j], s5[j-1]);
				strcpy(s5[j-1], tam);
			}
		}
	}
//	for(int i=0; i<count; i++)
//		printf("%s ", s5[i]);
	int flag[200];
	for(int i=0; i<count; i++)
		flag[i] = 1;
	for(int i=0; i<count; i++){
		dem3 = 1;
		if(flag[i]){
			flag[i] = 0;
			for(int j=i+1; j<count; j++){
				if(strcmp(s5[i], s5[j])==0){
					dem3++;
					flag[j] = 0;
				}
			}
			printf("%s ", s5[i]);
		}
	}
}
