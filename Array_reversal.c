#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,d,temp;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   d=n-1;
   int a[n];
   printf("Enter the elements:");
   for(int i=0;i<n;i++)
   {
       scanf("%d ",&a[i]);
   }
   int b[n];
   int end = n-1;
   for(int i=0;i<n;i++)
   {
       b[i] = a[end];
       end--;
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",b[i]);
   }
   return 0;
}
