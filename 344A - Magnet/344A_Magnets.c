#include<stdio.h>
int main()
{
     int n,i,a=1;
     scanf("%d",&n);
     int ara[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&ara[i]);
     }
     for(i=0;i<n-1;i++)
     {
          if(ara[i]!=ara[i+1])
               a++;
     }
     printf("%d",a);
     return 0;
}
