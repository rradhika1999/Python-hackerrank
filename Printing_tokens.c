#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int m,i;
char s[100];
int main() {
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            printf("%c",s[i]);
        }
        else 
        {
            printf("\n");
        }
    }
    return 0;
}
