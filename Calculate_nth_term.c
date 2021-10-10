#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int n, a, b, c;

int fib(int n)
   {
    if(n==a)
      return a;
    else if(n==b)
      return b;
    else if(n==c)
      return c; 
    else
      fib(n-1)+fib(n-2)+fib(n-3);
    return fib;
   }
int find_nth_term(int n, int a, int b, int c) 
{
   int w=fib(n);
   return w;
}

int main() {
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int k=find_nth_term(n, a, b, c);
    printf("%d",k); 
    return 0;
}
