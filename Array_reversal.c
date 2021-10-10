#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,d,temp;
   scanf("%d",&n);
   d=n-1;
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d ",&a[i]);
   }
   for(int i=0;i<n/2;i++)
   {
       temp=a[i];
       a[i]=a[d];
       a[d]=temp;
       d--;
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}

