#include <string.h>
#include <math.h>
#include <stdlib.h>

int check_if_five_digits(int n)
{
    int digit, count = 0,flag;
    do {
        n /= 10;
        ++count;
    } while (n != 0);
    if(count == 5)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int main() {
	
    int n,digit,sum=0;
    printf("Enter a 5 digit number:");
    scanf("%d", &n);
    if(check_if_five_digits(n) == 1)
    {
        while(n>0)
        {
            digit=n%10;
            sum=sum+digit;
            n=n/10;
        }
        printf("%d",sum);
    }
    else
    {
        printf("\nPlease enter a 5 digit number");
    }
    return 0;
}
