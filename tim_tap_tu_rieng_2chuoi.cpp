#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100], *pstr1[100], *pstr2[100], n1 = 0, n2 = 0;
	gets(str1);
	gets(str2);
	for (pstr1[n1] = strtok(str1, " "); pstr1[n1] != '\0'; pstr1[++n1] = strtok(NULL, " ")) {
	}
	for (pstr2[n2] = strtok(str2, " "); pstr2[n2] != '\0'; pstr2[++n2] = strtok(NULL, " ")) {
	}
	for (char i = 0; i < n2; i++) {
		for (char j = 0; j < n1; j++) {
			if (!strcmp(pstr2[i], pstr1[j])) { 
				*pstr1[j] = '\0';
			}
		}
	}
	for (char i = 0; i < n1 - 1; i++) {
		for (char j = i + 1; j < n1; j++) {
			if (strcmp(pstr1[i], pstr1[j]) == - 1) { 
				char *temp = pstr1[i];
				pstr1[i] = pstr1[j];
				pstr1[j] = temp;
			}
			if (!strcmp(pstr1[i], pstr1[j])) { 
				*pstr1[j] = '\0';
			}
		}
	}
	for (char i = n1 - 1; i >= 0; i--) {
		*pstr1[i] != '\0' ? printf("%s ", pstr1[i]) : 0;
	}
	return 0;
}
