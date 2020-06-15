#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[300];
	gets(s);
	for(int i=0; i<strlen(s); i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = tolower(s[i]);
	}
	puts(s);
}
