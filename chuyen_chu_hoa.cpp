#include<stdio.h>
#include<string.h>

int main(){
	char s[300];
	gets(s);
	for(int i=0; i<strlen(s); i++)
		if(s[i]>='a' && s[i]<='z')
			s[i] = s[i] - 32;
	puts(s);
}
