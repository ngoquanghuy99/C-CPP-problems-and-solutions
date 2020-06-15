#include<stdio.h>
#include<string.h>

int main(){
	char s[200], *ptr[100];
	int k = 0;
	gets(s);
	strlwr(s);
	for(ptr[0] = strtok(s, " "); ptr[k]!='\0'; ptr[++k] = strtok(NULL, " ")){
	}
	printf("%s", ptr[k-1]);  // c2
	for(int i=0; i<k-1; i++)
		printf("%c", *ptr[i]);
	printf("@ptit.edu.vn");
}
