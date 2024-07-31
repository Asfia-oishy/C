#include<stdio.h>
int main()
{
     int n,j;
     scanf("%d",&n);
     for(j=1 ; j<=n; j++)
     {
          if(j%2 !=0)
          {
               if(j<n) printf("I hate that\t");
               if(j==n) printf("I hate it");

          }
          else
          {
               if(j<n) printf("I love that \t");
               if(j==n) printf("I love it");
          }
     }
     return 0;
}
