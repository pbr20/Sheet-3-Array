#include <stdio.h>
int main()
{
   int n,i,j,k,star=0;

   scanf("%d",&n);
   for(i=1;i<=n;i++){
       star=2*i-1;
        for(j=1;j<=star;j++)
       {
           printf("*");
       }
       printf("\n");
   }
 return 0;
}