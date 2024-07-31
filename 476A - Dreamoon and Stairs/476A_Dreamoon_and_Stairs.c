#include<stdio.h>
int main()
{
     int n , m,min=100000,x,z;
     scanf("%d %d",&n, &m);
     if(n%2==0)
     z=n/2;
     else z=(n+1)/2;
     if(m>n)
          printf("-1");
     else
     {
          for(x=n ;x>=z ;x--)
          {
               if(x%m==0 )
               {
                    if(x<=min)
                    min=x;
               }

          }
          printf("%d",min);

     }

     return 0;
}
