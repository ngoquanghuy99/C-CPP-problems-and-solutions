#include<stdio.h>
#include<string.h>

int main(){
	char s1[300], dem1, dem2, dem3;
	dem1 = 0; dem2 = 0; dem3 = 0;
	gets(s1);
	for(int i=0; i<strlen(s1); i++){
		if(s1[i]>='0' && s1[i]<='9') dem1++;
		else if((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z')) dem2++;
		else dem3++;
	}
	printf("%d %d %d", dem1, dem2, dem3);
}
