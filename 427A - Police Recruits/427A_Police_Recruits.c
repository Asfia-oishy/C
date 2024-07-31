#include<stdio.h>
int main()
{
     int n,sum=0,x=0;
     scanf("%d",&n);
     int ara[n],i;
     for(i=0; i <n; i++)
     {
          scanf("%d",&ara[i]);
          sum=sum+ara[i];
          if(sum==-1)
          {
               x++;
               sum=0;
          }
     }
     printf("%d",x);
     return 0;
}
