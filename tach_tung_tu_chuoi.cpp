#include<stdio.h>
#include<string.h>

int main(){
	char s[300];
	gets(s);
	for(int i=0; i<strlen(s); i++){
//		putchar(s[i]);
//		printf(" ");
		printf("%c ", s[i]);
	}
}
