#include<stdio.h>
int main()
{
     int n ,ara[3],i,j,r=0,z=0;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
         for(j=0;j<3;j++)
         {
              scanf("%d",&ara[j]);
              if(ara[j] ==1)
               r++;
         }
            if(r>=2)
                    z++;
                    r=0;

     }
     printf("%d",z);
     return 0;
}
