#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int m,i;
char s[100];
int main() 
{
    gets(s);
    //the outer for loop is used to iterate through each character present in the string.
    for(i=0;i<strlen(s);i++)
    {
        //this if condition is used to check if the current encountered is a space or not.
        if(s[i]!=' ')
        {
            //if the character is not a space we keep printing it to a console.
            printf("%c",s[i]);
        }
        else 
        {
            //if we encounter a space, we move to the next line.
            printf("\n");
        }
    }
    return 0;
}
