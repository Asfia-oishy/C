#include<stdio.h>
int main()
{
     int i,ara[3],max=0,min=100000;
     for(i=0 ; i<3; i++)
     {
          scanf("%d",&ara[i]);
          if(ara[i]>=max)
               max=ara[i];
          if(ara[i]<=min)
               min=ara[i];
     }
     printf("%d",max-min);
     return 0;

}
