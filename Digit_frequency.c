#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char str[100],comp[10];
int k=0,count=0;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%s",&str);
    char comp[]={'0','1','2','3','4','5','6','7','8','9'};  
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]==comp[i])
            {
                count++;
            }
        }
        printf("%d ",count);
    }

    return 0;
}
