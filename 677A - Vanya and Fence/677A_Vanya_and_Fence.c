#include<stdio.h>
int main()
{
     int n,h,i,z=0,y=0;
     scanf("%d %d",&n ,&h);
     int ara[n];
     for(i=0 ; i<n; i++)
     {
          scanf("%d",&ara[i]);
     }
     for(i=0 ; i<n ; i++)
     {
          if(ara[i]>h)
               z=z+2;
          else
               y++;
     }
     printf("%d",z+y);
     return 0;
}
