#include<stdio.h>
#include<string.h>

int dem(char str[]){
	int dem = 0;
	if(str[0] != ' ') dem++;
	for(int i=0; i<strlen(str); i++){
		if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
			dem++;
	}
	return dem;
}

int main(){
	char str[500];
	gets(str);
	printf("%d", dem(str));
}
