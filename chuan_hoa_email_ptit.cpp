#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100], *pstr[100], n = 0;
    gets(str);
    strlwr(str);
    for (pstr[0] = strtok(str, " "); pstr[n] != '\0'; pstr[++n] = strtok(NULL, " ")) {
    }
    printf("%s", pstr[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        printf("%c", *pstr[i]);
    }
    printf("@ptit.edu.vn");
    return 0;
}
