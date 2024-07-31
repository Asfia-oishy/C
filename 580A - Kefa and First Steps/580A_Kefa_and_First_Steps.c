#include<stdio.h>
int main()
{
     int n,i,j,z=1,k,max=1;
     scanf("%d",&n);
     int ara[n];
     int q[n];
     for(i=0 ; i<n ;i++)
     {
          scanf("%d",&ara[i]);
     }
     for(i=0 ; i<n ; i++)
     {
          q[i]=0;
     }
     for(i=0,j=0 ; i<n-1 ; i++)
     {
          if(ara[i]<=ara[i+1])
               {
                    z++;

               }
          if(ara[i]>ara[i+1] || i==n-2)
          {
               q[j]=z;
               j++;
               z=1;
          }
     }
     for(k=0 ; k<n ; k++)
     {
          if(q[k]>= max)
               max=q[k];
     }
      printf("%d",max);
     return 0;
}
