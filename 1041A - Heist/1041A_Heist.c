#include<stdio.h>
int main()
{
     int n,max=0,min=1000000000,i ,z ,q;
     scanf("%d",&n);
     int ara[n];
     for(i=0 ; i<n ; i++)
     {
          scanf("%d",&ara[i]);
          if(ara[i]>=max)
               max=ara[i];

          if(ara[i]<=min)
               min=ara[i];
     }
     z=max -min +1;
     q=z-n;
     printf("%d",q);
     return 0;
}
